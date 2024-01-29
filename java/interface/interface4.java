
interface my{
default void show(){

System.out.println("my");
 }

};
interface my1{
default void show(){

System.out.println("my1");
}
};

class child implements my,my1{
 public void show(){

System.out.println("child");
 }
public static void main(String ...s){
 
child  m1 =new child();
m1.show();

}
}
//here if you don't make child method public then it will give error 
//as the child class show method overrride the parent interface show method of both interface and print child as output not my or my1