abstract class abc
{

 void fun(){
System.out.println("abc");

}





};
public  class main1 extends abc {
//this method override parent class abc method and this will run 
public void fun(){
System.out.println("main1");
}

public static void main(String ... s){

abc obj= new main1();
obj.fun();
}



} 
//run by javac abstarction0.java then java main1