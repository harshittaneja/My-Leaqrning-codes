class base{
int x=10;
 void show(){
System.out.println("base");
}


};
class child extends base{
int x=20;
 public static void main(String ... s){
base b = new child();
b.show();

}
}