interface my{

default void  show(){
System.out.println("interface");
}
}

class child implements my{


public static void main(String ...s){

my m1 =new child();
m1.show();

}
}
//here in interface we have body of (show) method becoz it is default so it will print interface 
// run by javac interface3.java then java child not direct java interface3.java