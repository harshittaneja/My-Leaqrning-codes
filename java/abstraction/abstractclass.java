abstract class base
{
int x;
int y;
void show(){
System.out.println(x);
System.out.println(y);
}
}
class child extends base{

void set(int x ,int y){
#here this.x care refrence of child and child cares reference of abstartct so int x ,y in abstract class get values 
this.x =x ;
this.y= y;
}
public static void main(String ... s){
System.out.println("display");
child c1 = new child();
c1.set(10,20);
c1.show();
}

}