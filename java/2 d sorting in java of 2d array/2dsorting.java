
import java.util.Scanner;
class dsorting{
public static void main(String ... s){
	Scanner c =new Scanner(System.in);
                 
int i,k=0,l,temp,j,n,m;
	int arr[][]= new int[10][10];
	int arr1[]= new int[1000];
    System.out.println("enter the size of row and column :");
	m=c.nextInt();
         n=c.nextInt();
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			arr[i][j] =c.nextInt();
			
		
		}
	}

for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			arr1[k++]=arr[i][j];
			
		
		}
		
	}

	
	for(l=1;l<m*n;l++){
		for(k=0;k<m*n-l;k++){
	if(arr1[k]>arr1[k+1]){
		temp=arr1[k+1];
		arr1[k+1]=arr1[k];
		arr1[k]=temp;
	}
		}
	}
	for(k=0;k<m*n;k++){
		System.out.print(arr1[k]+" ");
	}
}
}


