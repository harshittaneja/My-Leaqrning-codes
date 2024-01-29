import java.util.Scanner;
class test{
	public static void main( String[] args) {
int j=0,k=0,count=0,count1=0;
		Scanner s =new Scanner(System.in);
System.out.println("enter the size of array :"); 
int w =s.nextInt();
	   int arr[]=new int[w];  
	   int even[]=new int[w];  
	   int odd[]=new int[w];  
   
   for(int i=0;i<w;i++) {
System.out.print("arr["+i+"] ="); 
	   arr[i]=s.nextInt();
   }
   for(int i=0;i<w;i++) {
   if(arr[i]%2==0) {
	even[j++]=arr[i];
	   count++;
   }
   else {
odd[k++]=arr[i];
   count1++;
   }
   
   }
   System.out.print("odd[]=");
   for(int i=0;i<count1;i++) {
	   
System.out.print(odd[i]);   
	   
   }

   System.out.print("\n");

   System.out.print("even[]=");
   for(int i=0;i<count;i++) {
	   
System.out.print(even[i]);   
	   
   }
	    }
  }
  

