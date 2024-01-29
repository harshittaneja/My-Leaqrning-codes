class base{
 void  show(){
System.out.println("base");
}


};
class child extends base{
  final  void show(){

System.out.println("child");
}
public static void main(String ... s){

child c1 = new child();
c1.show();
}


};
