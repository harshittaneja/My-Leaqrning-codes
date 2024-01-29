class base{
int x=10;
 void show(){
System.out.println("base");
}
};
class child extends base{
int x=20;
void show(){
System.out.println("child");
}
 public static void main(String ... s){
base b = new child();
b.show();
System.out.println(b.x);

}
}