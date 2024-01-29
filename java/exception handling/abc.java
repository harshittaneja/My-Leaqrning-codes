import java.util.Scanner;
class abc extends Exception{
public static  void valide(int i)throws Exception{
if(i<18){
throw new Exception("Under age not able to vote");
}
else{
System.out.println("ready for vote");
}

}
public static void main(String ... a)throws Exception{
int age ;
Scanner s =new Scanner(System.in);
System.out.println("enter the age check valid for vote or not");
try{
age=s.nextInt();
valide(age);
}
catch(Exception e){
System.out.println("Under age not able to vote");

}


}
}