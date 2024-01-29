
class har1 extends Thread{
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
class har2 extends Thread{


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
public class harshit  {

public static void main(String ... k){
har2 obj1=new har2();
har1 obj=new har1();

obj1.start();
obj.start();



}


}