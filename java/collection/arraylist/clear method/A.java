import java.util.Scanner;
final class A{
final String name;
final int age;
final string clas ;
A(int name ,int age ,int class){
this.name =name;
this.clas=clas;
this.age=age;
}
public void show(){

System.out.Println("name :"+name);
System.out.Println("class :"+clas);
System.out.Println("age"+age);
}
public String getname(){
return name;
}
public int getage(){
return age;
}
public String getclas(){
return clas;
}
}
public class b{
int age;
String name;
String  clas;
Scanner s =new Scanner(System.in);
public static void main(String ... l){
System.out.Println("enter the name then age and class");
name=s.next();
age=s.nextInt();
clas=s.next();
A obj =new A(name,age ,clas);
obj.show();

}
}