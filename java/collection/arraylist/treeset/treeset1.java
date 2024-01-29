import java.util.*;
class  treeset1{

public static void main(String ... s){


TreeSet<String> t=new TreeSet<>();
t.add("kgl"); 
t.add("abd");
t.add("fcc");
t.add("abf");
t.add("fcc");    
Iterator it= t.iterator();
while(it.hasNext()){
System.out.println("string is "+ it.next());

} 

}



}