interface my{

default public void  show(){
System.out.println("interface");

}
};//semicolon is to compuls0ry

class child implements my{
 public void  show(){
System.out.println("child");

}
public static void main(String ...s){
my c1= new child();
c1.show();

}
}
//here the method is default and  same method(ublic void  show()) in main so its print child 