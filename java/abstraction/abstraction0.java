abstract class abc
{
//it is a non abstract method (whose body can be defined) if child class no method present so it will run
public void fun(){
System.out.println("abc");

}





};
public  class main1 extends abc {

public static void main(String ... s){

abc obj= new main1();
obj.fun();
}



} 
//run it by javac abstarction0.java then java main1