import java.util.Scanner;
final class A{
final String name;
final int age;
final String clas ;
A(String nam ,int ag ,String clas){
this.name =nam;
this.clas=clas;
this.age = ag;
}
public void show(){

System.out.println("name :"+name);
System.out.println("class :"+clas);
System.out.println("age"+age);
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


public static void main(String ... l){
int ag;
String nam;
String  clas;
Scanner K =new Scanner(System.in);
System.out.println("enter the name then age and class");
nam=K.next();
ag=K.nextInt();
clas=K.next();
A obj =new A(nam,ag ,clas);
obj.show();

}
}