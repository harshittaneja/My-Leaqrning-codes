//import java.util.Scanner;
#include<iostream>
using namespace std;
 main() {
		int i,z;
			int j;
			int arr[100];

for( i=0;i<5;i++) {
	cout<<"enter the numbers:";
	cin>>arr[i];
	
}
if(i+1<=5){

		for( i=0;i<5;i++) {
		if (arr[i]>arr[i+1]){
		
			z = arr[i+1];
			arr[i+1]=arr[i];
					arr[i]=z;	
					}
				}
			}
							
		
	for( i=0;i<5;i++) {
		cout<<" "<<arr[i];
	}

}
	



	

		
	
