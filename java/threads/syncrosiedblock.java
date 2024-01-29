
class Table{  
	synchronized  void print(int x){
	for(int i=1;i<5;i++) {
	System.out.println(x*i);
	try {
		Thread.sleep(1000);
	}
	catch(Exception e) {
		System.out.println("hello");
	}
	}
}


  
 } 
 


  
class harshit1 extends Thread{
  
Table t; 
 
harshit1(Table t){
  
this.t=t; 
 
}  

public void run(){  

t.print(5); 
 

}  
  
}
  
class naman extends Thread{
  
Table t;
  
naman(Table t){  

this.t=t;  

}  
public void run(){
  
t.print(100);
  
}
  
}  

  
class harshit{
  
public static void main(String args[]){
  
Table obj = new Table();
//only one object  
harshit1 t1=new harshit1(obj);
  
naman t2=new naman(obj);
  
t1.start();  

t2.start();  
} 
 
}  