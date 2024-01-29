import java.util.regex.*;
public class regexcode {
//regex stands for regular expression 
	public static void main(String[] args) {
		// TODO Auto-generated method stub

	String sample="HarshitTaneja";
	
Pattern p=Pattern.compile("Ha(.*?)ja");
Matcher m = p.matcher(sample); 

while(m.find()) {
	System.out.println(m.group(1));
}
	}

}
