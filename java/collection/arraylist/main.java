import java.util.*;
class Student{

String name, course ;
int age;
Student(int age,String course,String name){
this.name=name;
this.age=age;
this.course=course;
}

public String  toString(){

return name + course+ age;


}
}

class main{

public static void main(String ... l){
String nam,coure;
int ag;
ArrayList<Student> p=new ArrayList<>();
Scanner s =new Scanner(System.in);
System.out.println("enter the name then and age");
nam=s.next();
coure=s.next();
ag=s.nextInt();
Student s1=new Student(ag,coure,nam);
p.add(s1);
Iterator it= p.iterator();
while(it.hasNext()){

System.out.println(""+it.next().toString());

}





}









}