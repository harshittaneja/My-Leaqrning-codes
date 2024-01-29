package semaphoresunderstanding;

import java.util.concurrent.*;

class Shared{
    static int balance = 20000;
}

class MyThread extends Thread{
    Semaphore sem;
    String tname;
    
    public MyThread(Semaphore sem, String tname){
        super(tname);
        this.sem = sem;
        this.tname = tname;
    }
    
    public void run(){
        if(this.getName().equals("A")){
            System.out.println("Starting : " + tname);
            try{
                System.out.println("Thread " + tname + " is waiting");
                
                sem.acquire();   //  1  A  acquired     1-1=0
                
                System.out.println(tname + " acquires permit");
                
                for(int i=0; i<5; i++){
                    Shared.balance += 2000;
                    System.out.println(tname + ": " + Shared.balance);
                    Thread.sleep(2000);
                }
                
            }catch(InterruptedException e){
                System.out.println(e);
            }
            System.out.println(tname + " releases thread");
            sem.release(); //   0+1 = 1
        }
        else
        {
            System.out.println("Starting : " + tname);
            try{
                System.out.println("Thread " + tname + " is waiting");
                
                sem.acquire();   //    b acquire    1 - 1 = 0
                
                System.out.println(tname + " acquires permit");
                
                for(int i=0; i<5; i++){
                    Shared.balance -= 2000;
                    System.out.println(tname + ": " + Shared.balance);
                    Thread.sleep(2000);
                }
                
            }catch(InterruptedException e){
                System.out.println(e);
            }
            System.out.println(tname + " releases thread");
            sem.release();   //  0 + 1 = 1
        }
    }
}

public class Harshit{

     public static void main(String []args) throws InterruptedException{
    	 //In this code we are going to understand semaphore concept of oS that when one variable is shared by two process
    	 //process are like thread taken here as thread are also low priority process
    	 //shared variable is static int balance 
    	 //when thread A takes value of balance it will going to update it by 2000 until it acquires the lock  b can't access Balance 
    	 //when A release lock then B acquires then use it then release it
    	 
        Semaphore sem = new Semaphore(1);
        
        MyThread t1 = new MyThread(sem, "A");
        MyThread t2 = new MyThread(sem, "B");
        
        t1.start();
        t2.start();
        
        t1.join();
        t2.join();
        
        System.out.println("Balance is : " + Shared.balance);
     }
}