#include<iostream>
using namespace std;
main(){
	int n,i,position,choice;
	float arr[100],new1;
	char put='y';
	cout<<"Expirement no 1:"<<endl;
	cout<<"Enter the choices of operation:\n1.Insert the new element at end as well as at given position .";
	cout<<"\n2.Delete an element from a given array whose value is given or position is given.";
	cout<<"\n3.To find the location of a given element .";
	cout<<"\n4.To display  the element of the linear array.";
	cout<<"\n\n\nEnter the width of array: ";
	cin>>n;
	for(i=0;i<n;i++){
   	cout<<"enter the arr["<<i<<"] element: ";
   	cin>>arr[i];
   	}
	while(put=='y'){

   	 cout<<"enter the choices :";
   	cin>>choice;
 
	   
	switch(choice){
		case 1:cout<<"insert the new element at end as well as at given position please enter the position & new element ";
		        cin>>position>>new1;
		       for(i=n-1;i>=position;i--){
		       	arr[i+1]=arr[i];
			   }
			   
			   arr[position]=new1;
			   n=n+1;
			   cout<<"press y to continue and n to disconitnute:";
			   cin>>put;
			    
			   
			   	break;
			   	case 2:
			   		cout<<"Insert the position from where the element to delete : ";
			   		cin>>position;
			   		 for(i=position;i<n;i++){
		       	arr[i]=arr[i+1];
		       
		       	
			   }
			   	
			   	n=n-1;
			   cout<<"press y to continue and n to disconitnute:";
			   cin>>put;
			   break;
		   	case 3:
			cout<<"location of new element "<<new1<<" is : "<<position<<endl;
		cout<<"press y to continue and n to disconitnute:";
			   cin>>put;
			   
			   
		break;
		case  4 :
		cout<<"elements: ";
		for(i=0;i<n;i++){
			cout<<arr[i];
		}
		cout<<endl;
		cout<<"press y to continue and n to disconitnute:";
			   cin>>put;
			   
		break;
	
				default:
				cout<<"Oops something went wrong !!!!!!!!!!!!!!!";
		cout<<"press y to continue and n to disconitnute:";
			   cin>>put;
			   
			   
		break;
		
		
		
		
		
		

		
	}


	
}


}
	
	
	
	
	
	
	
	
	
	
	
		
		
	
	
	
	
	
	
	
	
	
	

