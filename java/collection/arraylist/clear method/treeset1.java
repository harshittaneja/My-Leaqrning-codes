import java.util.*;
class  treeset1{

public static void main(String ... s){
ArrayList<Integer> p1=new ArrayList<>();
p1.add(1);
p1.add(1);
p1.add(3);
p1.add(3);
p1.add(4);
p1.add(4);
p1.add(5);
p1.add(5);
ArrayList<Integer> p2=new ArrayList<>();
p2.add(3);
p2.add(4);
p1.addAll(p2);
TreeSet<Integer> t=new TreeSet<>();
t.addAll(p1); 
p1.clear();
p1.addAll(t);
Iterator it= p1.iterator();
while(it.hasNext()){
System.out.println("string is "+ it.next());

} 

}



}