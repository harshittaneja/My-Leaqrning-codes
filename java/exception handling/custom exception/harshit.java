
import java.util.*;
class myexception extends Exception{
	myexception(String s){ 
		super(s);
	}
}
public class harshit
{
	public static   void  fun(int n) throws Exception{
		if(n>18) {
			System.out.println("eligible to vote :");
		}
		else {
			throw new  myexception("under age");
		}
	}
		
public static void main(String ...d ) {	
	int age;
	Scanner s =new Scanner(System.in);
	System.out.println("enter the age :");
	age=s.nextInt();
	try {
		fun(age);
		
		
	}
	catch(Exception e){
		System.out.println(e);
	}
	
	
}
}