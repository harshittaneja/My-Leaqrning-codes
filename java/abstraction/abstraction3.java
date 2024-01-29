//this code is for understanding it will not run it is a eroor code
abstract class A
{
 void fun(){
System.out.println("A method");
}
};
abstract class B  
{

abstract void fun(){

System.out.println("B method");
}
};

 class main1 extends A,B {
//we can't do mutiple inherintence  in it as not possible in java so this code not run but we can do mutple interface


public static void main(String ... s){

abc obj= new main1();
obj.fun();
}



} 
