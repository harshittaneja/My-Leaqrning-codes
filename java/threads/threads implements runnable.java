
class har1 implements Runnable{
public  void run(){

for(int i=0;i<5;i++){
System.out.println("harshit");
try{
Thread.sleep(1000);
}
catch(Exception e){
}
}
}
}
class har2 implements Runnable{


public void run(){
for(int i=0;i<5;i++){
System.out.println("taneja");
try{
Thread.sleep(1000);
}
catch(Exception e){
}
}
}

}
public class threads  {

public static void main(String ... k){
 Runnable obj=new har1();
 Runnable obj1=new har2();
Thread t1=new Thread(obj);
Thread t2=new Thread(obj1);
t1.start();

t2.start();


}


}