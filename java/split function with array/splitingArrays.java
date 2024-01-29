 import java.util.Arrays;
public class splitingArrays {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	String sample="harshit X naman X yash X murli ";
	String[] a=sample.split("X");
//String[] a=sample.split(" X ");
//note if you add don't want tot add space in between elements so you have to provide space between spit x
System.out.println(Arrays.toString(a));	


String abc ="harshit";
	String sub=abc.substring(1,4);
	// not 4 is excluded here it will count only from 1 to 3 
System.out.print(sub);
	}

}