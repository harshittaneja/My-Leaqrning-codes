import java.util.*;
public class abc1{

public static void main(String ... s){
int i=0,j,temp=0;
ArrayList<Integer> al =new ArrayList<>();
al.add(2);
al.add(2);
al.add(2);
al.add(1);
al.add(3);
al.add(1);


Collections.sort(al);

int k=al.size();
System.out.println("k  "+ k);
for(i=1;i<al.size();i++){
for(j=0;j<al.size()-i;j++){
if(al.get(j).equals(al.get(j+1))){
al.remove(j);
}
}
}
Iterator it =al.iterator();
while( it.hasNext() ){
System.out.println("remaing  "+ it.next());
}

}

} 