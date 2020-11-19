using System;
using System.Collections.Generic;
using System.IO;
using System.Net;
using System.Timers;

namespace DownloadOPS
{
    class Program
    {
        private static Timer aTimer;
        private static int timerTick = 60;  //in second
        private static String ftpServer;  
        private static String ftpPassword;  
        private static String ftpOPSContentPath;  
        private static String ftpOPSXMLPath; 
        private static String localOPSContentPath; 
        private static String localOPSXMLPath;
        private static String ftpOPSTempPath;
        private static String localOPSTempPath;
        private static String LogPath;
        static void Main(string[] args)
        {
            try
            {
                // read config https://stackoverflow.com/questions/6041332/best-way-to-get-application-folder-path
                string[] lines = System.IO.File.ReadAllLines(Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "config.txt"));
                foreach (string line in lines)
                {
                    string[] cols = line.Split('=');
                    foreach(string col in cols)
                    {
                        switch (col)
                        {
                            case "ftpServer":
                                ftpServer = cols[1];
                                break;

                            case "ftpPassword":
                                ftpPassword = cols[1];
                                break;

                            case "ftpOPSContentPath":
                                ftpOPSContentPath = cols[1];
                                break;

                            case "ftpOPSXMLPath":
                                ftpOPSXMLPath = cols[1];
                                break;

                            case "ftpOPSTempPath":
                                ftpOPSTempPath = cols[1];
                                break;

                            case "localOPSContentPath":
                                localOPSContentPath = cols[1];
                                break;

                            case "localOPSTempPath":
                                localOPSTempPath = cols[1];
                                break;

                            case "localOPSXMLPath":
                                localOPSXMLPath = cols[1];
                                break;

                            case "LogPath":
                                LogPath = cols[1];
                                DateTime today = DateTime.Today;
                                LogPath = LogPath + today.ToString("ddMMyyyy") + "UpdateOPSlog.txt";
                                Console.WriteLine(LogPath);
                                break;
                        }
                    }
                }
            }
            catch(Exception e)
            {
               Console.WriteLine(e.ToString());
            }
            /*SetTimer();
            while (true) { }*/
            //  hide cmd window https://stackoverflow.com/questions/3853629/hide-console-window-in-c-sharp-console-application
            Console.WriteLine("Connecting to FTP server...");
            NetworkCredential credentials = new NetworkCredential(ftpServer, ftpPassword);
            GetUpdateFromFTPServer(ftpOPSContentPath, credentials, localOPSContentPath);
            GetUpdateFromFTPServer(ftpOPSXMLPath, credentials, localOPSXMLPath);
            //GetUpdateFromFTPServer(ftpOPSTempPath, credentials, localOPSTempPath);
            Console.WriteLine("UpdateFinished.");
        }
        /*
        static void DownloadFtpDirectory(string url, NetworkCredential credentials, string localPath)
        {
            FtpWebRequest listRequest = (FtpWebRequest)WebRequest.Create(url);
            listRequest.Method = WebRequestMethods.Ftp.ListDirectoryDetails;
            listRequest.Credentials = credentials;


            List<string> lines = new List<string>();

            using (FtpWebResponse listResponse = (FtpWebResponse)listRequest.GetResponse())
            using (Stream listStream = listResponse.GetResponseStream())
            using (StreamReader listReader = new StreamReader(listStream))
            {
                while (!listReader.EndOfStream)
                {
                    lines.Add(listReader.ReadLine());
                }
            }

            foreach (string line in lines)
            {
                string[] tokens =
                    line.Split(new[] { ' ' }, 9, StringSplitOptions.RemoveEmptyEntries);
                string name = tokens[8];
                string permissions = tokens[0];

                string localFilePath = Path.Combine(localPath, name);
                string fileUrl = url + name;

                if (permissions[0] == 'd')
                {
                    if (!Directory.Exists(localFilePath))
                    {
                        Directory.CreateDirectory(localFilePath);
                    }

                    DownloadFtpDirectory(fileUrl + "/", credentials, localFilePath);
                }
                else
                {
                    FtpWebRequest downloadRequest = (FtpWebRequest)WebRequest.Create(fileUrl);
                    downloadRequest.Method = WebRequestMethods.Ftp.DownloadFile;
                    downloadRequest.Credentials = credentials;

                    using (FtpWebResponse downloadResponse =
                              (FtpWebResponse)downloadRequest.GetResponse())
                    using (Stream sourceStream = downloadResponse.GetResponseStream())
                    using (Stream targetStream = File.Create(localFilePath))
                    {
                        byte[] buffer = new byte[10240];
                        int read;
                        while ((read = sourceStream.Read(buffer, 0, buffer.Length)) > 0)
                        {
                            targetStream.Write(buffer, 0, read);
                        }
                    }
                }
            }
        }*/

        static void GetUpdateFromFTPServer(string url, NetworkCredential credentials, string localPath)
        {
            using (StreamWriter w = File.AppendText(LogPath))
            {
                Console.WriteLine("Updating....");
                Log("Connecting to FTP server...", w);
                try
                {
                    FtpWebRequest listRequest = (FtpWebRequest)WebRequest.Create(url);
                    listRequest.Method = WebRequestMethods.Ftp.ListDirectoryDetails;
                    listRequest.Credentials = credentials;

                    List<string> lines = new List<string>();

                    using (FtpWebResponse listResponse = (FtpWebResponse)listRequest.GetResponse())
                    using (Stream listStream = listResponse.GetResponseStream())
                    using (StreamReader listReader = new StreamReader(listStream))
                    {
                        while (!listReader.EndOfStream)
                        {
                            lines.Add(listReader.ReadLine());
                        }
                    }

                    foreach (string line in lines)
                    {
                        string[] tokens = line.Split(new[] { ' ' }, 9, StringSplitOptions.RemoveEmptyEntries);
                        //string permissions = tokens[0];
                        string fileSize = tokens[4];
                        string month = tokens[5];
                        string date = tokens[6];
                        string time = tokens[7];
                        string name = tokens[8];

                        string localFilePath = Path.Combine(localPath, name);
                        string fileUrl = url + name;    //ftp file url
                                                        // 4=>file size in Byte  5,6,7=> Apr,22,17:32

                        string iString = month + "-" + date + " " + time;
                        DateTime oDate = new DateTime();
                        //DateTime oDate = DateTime.ParseExact(iString, "MMM-dd HH:mm", null);
                        if (DateTime.TryParse(iString, out oDate))
                            Log(name + "(ftp server) updated at " + oDate.ToString(), w);
                        else
                            Log("Unable to convert to a date."+ iString, w);
                        //Log(name + "(ftp server) updated at " + oDate.ToString(), w);
                        //Console.WriteLine(name + "(ftp server) updated at " + oDate.ToString());

                        try
                        {
                            if (!File.Exists(localFilePath))
                            {
                                //File.Create(localFilePath);
                                //Console.WriteLine(name + " size:" + fileSize + " not exist in local directory, start download...");
                                Log(name + " size:" + fileSize + " not exist in local directory, start download...", w);
                                try
                                {
                                    FtpWebRequest downloadRequest = (FtpWebRequest)WebRequest.Create(fileUrl);
                                    downloadRequest.Method = WebRequestMethods.Ftp.DownloadFile;
                                    downloadRequest.Credentials = credentials;

                                    using (FtpWebResponse downloadResponse =
                                              (FtpWebResponse)downloadRequest.GetResponse())
                                    using (Stream sourceStream = downloadResponse.GetResponseStream())
                                    using (Stream targetStream = File.Create(localFilePath))
                                    {
                                        byte[] buffer = new byte[10240];
                                        int read;
                                        while ((read = sourceStream.Read(buffer, 0, buffer.Length)) > 0)
                                        {
                                            targetStream.Write(buffer, 0, read);
                                        }
                                    }
                                    // Update the last write time same as server update time 
                                    File.SetLastWriteTime(localFilePath, oDate);
                                    DateTime dt = File.GetLastWriteTime(localFilePath);
                                    //Console.WriteLine("The last write time of " + name + "(loacl) was " + dt + "synchronized with server");
                                    Log("The last write time of " + name + "(loacl) was " + dt + "synchronized with server", w);
                                }
                                catch (Exception e)
                                {
                                    //Console.WriteLine("Download failed: {0}", e.ToString());
                                    Log("Download failed with error " + e.ToString(), w);
                                }
                            }
                            else
                            {
                                DateTime dt = File.GetLastWriteTime(localFilePath);
                                //Console.WriteLine(name + "(loacal) was updated at {0}.", dt);
                                Log(name + "(loacal) was updated at" + dt, w);

                                if (DateTime.Compare(oDate, dt) == 0)
                                {
                                    // if local file update time same as server file update time, no problem
                                    //Console.WriteLine(name + "(loacal)  same as server file.");
                                    Log(name + "(loacal)  same as server file.", w);
                                }
                                else
                                {
                                    //Console.WriteLine(name + " in local directory's update time not same as server , start download, download size:" + " size:" + fileSize + "...");
                                    Log(name + " in local directory's update time not same as server , start download, download size:" + " size:" + fileSize + "...", w);
                                    try
                                    {
                                        FtpWebRequest downloadRequest = (FtpWebRequest)WebRequest.Create(fileUrl);
                                        downloadRequest.Method = WebRequestMethods.Ftp.DownloadFile;
                                        downloadRequest.Credentials = credentials;

                                        using (FtpWebResponse downloadResponse =
                                                  (FtpWebResponse)downloadRequest.GetResponse())
                                        using (Stream sourceStream = downloadResponse.GetResponseStream())
                                        using (Stream targetStream = File.Create(localFilePath))
                                        {
                                            byte[] buffer = new byte[10240];
                                            int read;
                                            while ((read = sourceStream.Read(buffer, 0, buffer.Length)) > 0)
                                            {
                                                targetStream.Write(buffer, 0, read);
                                            }
                                        }
                                        // Update the last write time same as server update time 
                                        File.SetLastWriteTime(localFilePath, oDate);
                                        dt = File.GetLastWriteTime(localFilePath);
                                        Log("Download success. The last write time of " + name + "(loacl) was " + dt + "synchronized with server", w);
                                        //Console.WriteLine("Download success. The last write time of " + name + "(loacl) was " + dt + "synchronized with server");
                                    }
                                    catch (Exception e)
                                    {
                                        //Console.WriteLine("Download failed: {0}", e.ToString());
                                        Log("Download failed with error " + e.ToString(), w);
                                    }
                                }
                            }
                        }
                        catch (Exception e)
                        {
                            //Console.WriteLine("The process failed: {0}", e.ToString());
                            Log("The process failed with error " + e.ToString(), w);
                        }
                    }
                }
                catch (Exception e)
                {
                    //Console.WriteLine("Failed to connet FTP server: {0}", e.ToString());
                    Log("Connet to FTP failed with error " + e.ToString(), w);
                }
                Console.WriteLine("Update "+url+"Success.");
            }
        }
        public static void Log(string logMessage, TextWriter w)
        {
            w.Write("\r\nLog Entry : ");
            w.WriteLine($"{DateTime.Now.ToLongTimeString()} {DateTime.Now.ToLongDateString()}");
            w.WriteLine($"  :{logMessage}");
            w.WriteLine("-------------------------------");
        }
        private static void SetTimer()
        {
            // Create a timer with a timerTick second interval.
            aTimer = new Timer(1000 * timerTick);
            // Hook up the Elapsed event for the timer. 
            aTimer.Elapsed += OnTimedEvent;
            aTimer.AutoReset = true;
            aTimer.Enabled = true;
        }
        private static void OnTimedEvent(Object source, ElapsedEventArgs e)
        {
            Console.WriteLine("The Elapsed event was raised at {0:HH:mm:ss.fff}", e.SignalTime);
            NetworkCredential credentials = new NetworkCredential(ftpServer, ftpPassword);
            GetUpdateFromFTPServer(ftpOPSContentPath, credentials, localOPSContentPath);
            GetUpdateFromFTPServer(ftpOPSXMLPath, credentials, localOPSXMLPath);
        }
    }
}
