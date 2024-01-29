abstract class abc
{
//note in abstarct class  we can have both abstract as well as non abstract method
// this method we can able to make body of it we can make body inside child method 
abstract void fun();
};
 class main1 extends abc {
//this method override parent class abc method and this will run 
public void fun(){
System.out.println("main1");
}

public static void main(String ... s){

abc obj= new main1();
obj.fun();
}



} 
