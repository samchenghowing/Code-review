package JsonToGeoJson;

public class features {
	private String tracker_serial_no;//not a location must have a train initially
	private String worker_name;
	private String UniqueID;	//for connection key use
	
	private String type;
	private int id;
	
	//geometry
	private String geometryType;
	private double Xcoordinate;
	private double Ycoordinate;
	
	//properties
	private int objectID;
	private int point_ID;
	private String pointName;
	private String track;
	private int chainage;
	private double Easting;
	private double Northting;
	private int angle = 0;
	
	public features(String a, int b, String c, double d, double e, 
			int f, int g, String h, String i, int j, double k, double l){
		this.type = a;
		this.id = b;
		this.geometryType = c;
		this.Xcoordinate = d;
		this.Ycoordinate = e;
		this.objectID = f;
		this.point_ID = g;
		this.pointName = h;
		this.track = i;
		this.chainage = j;
		this.Easting = k;
		this.Northting = l;			
		this.tracker_serial_no = null;
		this.worker_name = null;
		this.UniqueID = null;
	}
	
	public String getType() {
		return this.type;	
	}
	
	public int getId() {
		return this.id;	
	}
	
	public String geometryType() {
		return this.geometryType;	
	}
	
	public double getXcoordinate() {
		return this.Xcoordinate;	
	}
	
	public double getYcoordinate() {
		return this.Ycoordinate;	
	}
	
	public int getObjectID() {
		return this.objectID;	
	}
	
	public int getPoint_ID() {
		return this.point_ID;	
	}
	
	public String getPointName() {
		return this.pointName;	
	}
	
	public String getTrack() {
		return this.track;	
	}
	
	public int getChainage() {
		return this.chainage;	
	}
	
	public double getEasting() {
		return this.Easting;	
	}
	
	public double getNorthting() {
		return this.Northting;	
	}

	public int getAngle() {
		if(this.id>=0 && this.id<100 ) {
			if(this.track.equals("UT")) {//DT
				angle = 320;		
			}else {
				angle = 140;		
			}
		}else if(this.id>=100 && this.id<150 ) {
			if(this.track.equals("UT")) {//DT
				angle = 0;		
			}else {
				angle = 180;		
			}
		}else if(this.id>=150 && this.id<300 ) {
			if(this.track.equals("UT")) {//DT
				angle = 100;		
			}else {
				angle = 280;		
			}
		}else if(this.id>=300 && this.id<650 ) {
			if(this.track.equals("UT")) {//DT
				angle = 340;		//360
			}else {
				angle = 170;		
			}
		}else if(this.id>=650 && this.id<700 ) {
			if(this.track.equals("UT")) {//DT
				angle = 315;		
			}else {
				angle = 135;		
			}
		}else if(this.id>=700 && this.id<850 ) {
			if(this.track.equals("UT")) {//DT
				angle = 320;		
			}else {
				angle = 140;		
			}
		}else if(this.id>=850 && this.id<900 ) {
			if(this.track.equals("UT")) {//DT
				angle = 260;		
			}else {
				angle = 80;		
			}
		}else if(this.id>=900 && this.id<1000 ) {
			if(this.track.equals("UT")) {//DT
				angle = 330;		
			}else {
				angle = 150;		
			}
		}else if(this.id>=1000 && this.id<1100 ) {
			if(this.track.equals("UT")) {//DT
				angle = 10;		
			}else {
				angle = 190;		
			}
		}else if(this.id>=1100 && this.id<1200 ) {
			if(this.track.equals("UT")) {//DT
				angle = 290;		
			}else {
				angle = 110;		
			}
		}else if(this.id>=1200 && this.id<1300 ) {
			if(this.track.equals("UT")) {//DT
				angle = 260;		
			}else {
				angle = 80;		
			}
		}else if(this.id>=1300 && this.id<1400 ) {
			if(this.track.equals("UT")) {//DT
				angle = 290;		
			}else {
				angle = 110;		
			}
		}else if(this.id>=1400 && this.id<1500 ) {
			if(this.track.equals("UT")) {//DT
				angle = 210;		
			}else {
				angle = 30;		
			}
		}else if(this.id>=1500 && this.id<1600 ) {
			if(this.track.equals("UT")) {//DT
				angle = 270;		
			}else {
				angle = 90;		
			}
		}else if(this.id>=1600 && this.id<1700 ) {
			if(this.track.equals("UT")) {//DT
				angle = 315;		
			}else {
				angle = 135;		
			}
		}
		return angle;
	}
	
	public void setTrackerSerialNo(String SN) {
		this.tracker_serial_no = SN;	
	}
	
	public String getTrackerSerialNo() {
		return tracker_serial_no;
	}
	
	public void setWorker_name(String worker_name) {
		this.worker_name = worker_name;
	}
	
	public String getWorker_name() {
		return worker_name;
	}
	
	public void setUniqueID(String i) {
		this.UniqueID = i;	
	}
	
	public String getUniqueID() {
		return UniqueID;
	}
	
	
	@Override
	public String toString() {
		return "type:" + type + ", id:" + id
    			+ ", geometryType:" + geometryType + 
    			" X:" + Xcoordinate + " Y:" + Ycoordinate
    			+" objectID:" + objectID +" point_ID:" + point_ID
    			+" pointName:" + pointName +" Track:" + track
    			+" Chainage:" + chainage
    			+" Easting:" + Easting +" Northing:" + Northting
    			+ " TrackerSerialNo:" + tracker_serial_no;	
	}
	
	public String toOutputAddJSON() {
		return "[\r\n" + 
				"  {\r\n" + 
				"    \"geometry\" : {\r\n" + 
				"      \"x\": " + Xcoordinate + ",\r\n" + 
				"      \"y\": " + Ycoordinate + ",\r\n" + 
				"      \"spatialReference\": {\r\n" + 
				"        \"wkid\": 4326\r\n" + 
				"      }\r\n" + 
				"    },\r\n" + 
				"    \"attributes\" : {\r\n" + 
				"      \"OBJECTID\" :7,\r\n" + 
				"      \"name\" : \"" + worker_name + "\",\r\n" + 
				"      \"type\":\"EMU\",\r\n" + 
				"      \"angle\": "+getAngle()+"\r\n" + 
				"    }\r\n" + 
				"  }\r\n" + 
				"]";	
	}
	
	public String toOutputEditJSON(String OBJECTIDtoEdit) {
		return "[\r\n" + 
				"  {\r\n" + 
				"    \"geometry\" : {\r\n" + 
				"      \"x\": " + Xcoordinate + ",\r\n" + 
				"      \"y\": " + Ycoordinate + ",\r\n" + 
				"      \"spatialReference\": {\r\n" + 
				"        \"wkid\": 4326\r\n" + 
				"      }\r\n" + 
				"    },\r\n" + 
				"    \"attributes\" : {\r\n" + 
				"      \"OBJECTID\" :" + OBJECTIDtoEdit + ",\r\n" + 
				"      \"name\" : \"" + worker_name + "\",\r\n" + 
				"      \"type\":\"EMU\",\r\n" + 
				"      \"angle\": "+getAngle()+"\r\n" + 
				"    }\r\n" + 
				"  }\r\n" + 
				"]";	
	}
}
