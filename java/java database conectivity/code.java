import java.sql.*;
public class JDBC {

	public static void main(String[] args) {
try {		// TODO Auto-generated method stub
Class.forName("com.mysql.cj.jdbc.Driver");
	}
catch(Exception e) {
	System.out.print("driver not loaded");
}


	System.out.print("driver is loaded");
}
}
