import java.util.Scanner;
class palindrome{

public static void main(String ... s){
int num,sum=0,rem=0,c=0;
Scanner p=new Scanner(System.in);
System.out.println("enter the number to check :");
num=p.nextInt();
while(num>0){
c=sum;
 rem=num%10;
 sum=sum*10 +rem;
num=num/10;
}
if(sum==c)){
System.out.println(sum);
System.out.println("number entered is palidrome");
}
else{
System.out.println(sum);
System.out.println("number entered is not  palidrome");
}
}


}
