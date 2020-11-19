cd C:\content\

@echo off
	set TIMEOUT_RUNNING=20
	set TIMEOUT_STOPPED=5
	set "PROCESS_NAME=wmplayer.exe"
	set "PROGRAM=PlayVideo.bat"
    setlocal enableextensions disabledelayedexpansion
	
	call :getTime now
	
    set "task=day"
    if "%now%" lss "06:00:00,00" ( set "task=night" ) 
    if "%now%" geq "18:00:00,00" ( set "task=night" )

    call :task_%task%
	
	goto loop

    endlocal
    exit /b
	
:loop
call :getTime now
set "task2=day"
if "%now%" lss "06:00:00,00" ( set "task2=night" ) 
if "%now%" geq "18:00:00,00" ( set "task2=night" )

if "%task%"=="%task2%" (

  echo [%DATE% %TIME%] Process is playing good content - Nothing to do.
  timeout %TIMEOUT_RUNNING%
  
) else (

  echo [%DATE% %TIME%] Process is playing bad content - Executing start program
  call :task_%task2%
  set "task=%task2%"
  timeout %TIMEOUT_STOPPED%
)

tasklist /FI "IMAGENAME eq %PROCESS_NAME%" /NH | find /I /N "%PROCESS_NAME%" >NUL

if "%ERRORLEVEL%"=="0" (

  echo [%DATE% %TIME%] Process %PROCESS_NAME% is running - Nothing to do with %PROGRAM%.
  timeout %TIMEOUT_RUNNING%

) else (

  echo [%DATE% %TIME%] Process %PROCESS_NAME% is not running! - Executing start program: %PROGRAM%
  call :task_%task%
  timeout %TIMEOUT_STOPPED%
)
goto loop

:task_day
    :: do daily task
	start "" "wmplayer.exe" "C:\content\day.mov" /fullscreen 
    goto :eof

:task_night
    :: do nightly task
	start "" "wmplayer.exe" "C:\content\night.mov" /fullscreen 
    goto :eof
	
:: getTime
::    This routine returns the current (or passed as argument) time
::    in the form hh:mm:ss,cc in 24h format, with two digits in each
::    of the segments, 0 prefixed where needed.
:getTime returnVar [time]
    setlocal enableextensions disabledelayedexpansion

    :: Retrieve parameters if present. Else take current time
    if "%~2"=="" ( set "t=%time%" ) else ( set "t=%~2" )

    :: Test if time contains "correct" (usual) data. Else try something else
    echo(%t%|findstr /i /r /x /c:"[0-9:,.apm -]*" >nul || ( 
        set "t="
        for /f "tokens=2" %%a in ('2^>nul robocopy "|" . /njh') do (
            if not defined t set "t=%%a,00"
        )
        rem If we do not have a valid time string, leave
        if not defined t exit /b
    )

    :: Check if 24h time adjust is needed
    if not "%t:pm=%"=="%t%" (set "p=12" ) else (set "p=0")

    :: Separate the elements of the time string
    for /f "tokens=1-5 delims=:.,-PpAaMm " %%a in ("%t%") do (
        set "h=%%a" & set "m=00%%b" & set "s=00%%c" & set "c=00%%d" 
    )

    :: Adjust the hour part of the time string
    set /a "h=100%h%+%p%"

    :: Clean up and return the new time string
    endlocal & if not "%~1"=="" set "%~1=%h:~-2%:%m:~-2%:%s:~-2%,%c:~-2%" & exit /b