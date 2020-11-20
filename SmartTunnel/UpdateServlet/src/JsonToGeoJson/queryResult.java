package JsonToGeoJson;

public class queryResult { //queryResult from the map
	//attributes
	private int OBJECTID;
	private double Xcoordinate;
	private double Ycoordinate;
	
	queryResult(int a, double b, double c){
		this.OBJECTID = a;
		this.Xcoordinate = b;
		this.Ycoordinate = c;
	}
	
	public int getOBJECTID() {
		return OBJECTID;		
	}
	
	public double getXcoordinate() {
		return Xcoordinate;	
	}
	
	public double getYcoordinate() {
		return Ycoordinate;	
	}
	
	@Override
	public String toString() {
		return "OBJECTID: " + OBJECTID + " X: " + Xcoordinate + " Y: " + Ycoordinate;
	}
}
