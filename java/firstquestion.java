import java.util.Scanner;
class firstquestion{
public static void main(String...e){
Scanner s= new Scanner(System.in);
	int n,temp=0,k,i,j;
	char temp1;
	char arr1[]=new char[20];
	int arr[]=new int[20];
    System.out.println("enter the characters are width : ");
	n=s.nextInt();
	for(k=0;k<n;k++){
		System.out.println("enter the arr1"+"["+k+"]"+"element :");
	
	 arr1[k]=s.next().charAt(0);

	
	}
		for( i=0;i<n;i++){
		System.out.println("enter the arr"+"["+i+"]"+"element :");
		arr[i]=s.nextInt();
	}
		for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j+1];
				temp1=arr1[j+1];
				arr[j+1]=arr[j];
				arr1[j+1]=arr1[j];
				arr[j]=temp;
				arr1[j]=temp1;
			}
	
			}
		}
		for(j=0;j<n;j++){
			System.out.println(arr[j]);
		}
		
	

	for(j=0;j<n;j++){
			System.out.println(arr1[j]);
		}
}
}
