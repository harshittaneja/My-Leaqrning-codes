import java.util.*;

public class Test {
	
	public static void main(String[] args) 
	{
		//map to hold student grades
		Map<String, Integer> theMap = new HashMap<String, Integer>();
		
		theMap.put("Korth, Evan", 100);
		theMap.put("Plant, Robert", 90);
		theMap.put("Coyne, Wayne", 92);
		theMap.put("Franti, Michael", 98);
		theMap.put("Lennon, John", 88);
		
		System.out.println(theMap);
		System.out.println("--------------------------------------");
		System.out.println(theMap.get("Korth, Evan"));
		System.out.println(theMap.get("Franti, Michael"));
	
	}
	
}