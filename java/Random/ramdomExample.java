import java.util.Random;
public class ramdomExample{

     public static void main(String []args){
         Random rand = new Random();
         //this will select number from 0 to 1 (2) is excluded
        int rand_int1 = rand.nextInt(2);
        //this will select number from 1 to 2   0 is excluded
        int rand_int1 = rand.nextInt(2)+1;
        //this will select number from 0 to 2   
         int rand_int1 = rand.nextInt(3);
        
        System.out.println(rand_int1);
     }
}