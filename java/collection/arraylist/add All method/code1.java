import java.util.*;
class  code1{

public static void main(String ... s){
ArrayList<Integer> p1=new ArrayList<>();
p1.add(3);
p1.add(1);
ArrayList<Integer> p2=new ArrayList<>();
p2.add(3);
p2.add(2);
p1.addAll(p2);
Iterator it= p1.iterator();
while(it.hasNext()){
System.out.println("string is "+ it.next());

} 

}



}