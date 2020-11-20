package JsonToGeoJson;

public class webFeatures {
	private String tracker_serial_no;
	private String worker_name;
	private String UniqueID;
	private int worker_number;
	private String team_etms;
	private double location_long;
	private double location_lat;
	private String major;
	private String minor;
	private boolean train;
	private String updated;
	private boolean direction = true;
	private boolean intunnel;
	
	webFeatures(String a, String b, int c, String d, double e, double f, String g, String h,boolean i,String j,String UniqueID){
		this.tracker_serial_no = a;
		this.worker_name = b;
		this.worker_number = c;
		this.team_etms = d;
		this.location_long = e;
		this.location_lat = f;
		this.major = g;
		this.minor = h;
		this.train = i;
		this.updated = j;
		this.UniqueID = UniqueID;
	}
	
	public String gettracker_serial_no() {
		return tracker_serial_no;	
	}
	
	public String getworker_name() {
		return worker_name;	
	}
	
	public String getUniqueID() {
		return UniqueID;	
	}
	
	public int getworker_number() {
		return worker_number;	
	}
	
	public String getteam_etms() {
		return team_etms;	
	}
	
	public double getlocation_long() {
		return location_long;	
	}
	
	public double getlocation_lat() {
		return location_lat;	
	}
	
	public String getmajor() {
		return major;	
	}
	
	public String getminor() {//convert hex string to int
		return minor;	
	}
	
	public boolean gettrain() {
		return train;	
	}
	
	public String getupdated() {
		return updated;	
	}
	
	public boolean determineTrainUPDOWN() {	//true == up
		
		if(this.major.substring(2,4).equals("01")) {
			direction = true;
		}else if(this.major.substring(2,4).equals("02")) {
			direction = false;
		}else if(this.major.substring(2,4).equals("03")) {
			//intunnel = true;
		}else if(this.major.substring(2,4).equals("04")) {
			//intunnel = true;
		}else if(this.major.substring(2,4).equals("05")) {
			//intunnel = true;
		}else if(this.major.substring(2,4).equals("06")) {
			//intunnel = true;
		}else {
			
		}
		return direction;		
	}
	
	public boolean determineTrainIntunnel() {	//true == up
		
		if(this.major.equals("")){
			intunnel = false;
		}else {
			intunnel = true;
		}
		return intunnel;		
	}
}
