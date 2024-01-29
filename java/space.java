import java.util.Scanner;
class space{
public static void main(String[] arg){
Scanner s= new Scanner(System.in);
System.out.println("please enter the strings ");
String s1=s.nextLine();
String s2=s.nextLine();
if(s1.equals(" ") && s2.equals(" ")){
System.out.println(" please enter the string");
}
else{
System.out.println("concated string:"+ s1+ s2);
}
}
}




 