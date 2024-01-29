import java.util.Scanner;
class Test3{
   public static void main( String[] args) {
	   Scanner sc = new Scanner(System.in);
		int i=0,number=0;
		System.out.println("enter the number :");
		number=sc.nextInt();
		for(i=2;number>0;i++){
		while(number%i==0){
			System.out.println(i);
			number=number/i;
		}
  
}
   }
}
