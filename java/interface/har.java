interface harshit{
void display();
}
abstract class h1{
public abstract void show();
public void print(){
System.out.print("printf");
}
}
public class har extends h1  implements harshit{

public void display(){
System.out.print("display");
}
public void show(){
System.out.print("show");
}

public static void main(String ... s){

har obj =new har();
obj.display();
obj.show();
obj.print();


}



}