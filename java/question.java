import java.util.Scanner;
 
public class question{
     
    public static void main(String[] args) {
        Scanner sn = new Scanner(System.in);
 int n=sn.nextInt();
int sum=0;
int arr[]=new int[10];
for(int i=0;i<n;i++){
arr[i]=sn.nextInt();
}
for(int i=0;i<n;i++){
  if(arr[i]%2==0){
if(arr[i]%3==0){

sum = sum+arr[i];
  
     

}
  }
}
 System.out.println(sum);

}
}

       

