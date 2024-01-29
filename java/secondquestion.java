import java.util.Scanner;
class secondquestion{
public static void main(String ...s) {
int temp,i,j,n,k;
  
int arr[]=new int[10];
	Scanner p=new Scanner(System.in);
	System.out.println("enter the width of array:");
	n=p.nextInt();
	for(i=0;i<n;i++) {
		k=i+1;
	System.out.println("enter the "+k +" element");
		arr[i]=p.nextInt();
	}
	for(i=1;i<n;i++) {
		for(j=0;j<n-i;j++) {
			if(arr[j]>arr[j+1]) {
		  temp=arr[j+1];
			arr[j+1]=arr[j];
			arr[j] =temp;
		}
	}
	}
	for(j=0;j<n;j++) {
		System.out.println("\n"+ arr[j]);
	}
	System.out.println("enter the value of K :");
	k=p.nextInt();
	System.out.println("Here  at k: "+k+" value = "+ arr[k-1]);
}
}