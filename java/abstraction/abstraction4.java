//this code is for understanding it will not run it is a eroor code
abstract class A
{
 void fun(){
System.out.println("A method");
}
};
abstract class B extends A 
{

// now B inherited A class so fun method of B class override the method of A class and main1 class inherited B class so this will give B method as output 
 void fun(){

System.out.println("B method");
}
};

 class main1 extends B {
//we  do mutilevel inherintence  here

public static void main(String ... s){

main1 obj= new main1();
obj.fun();
}



} 
