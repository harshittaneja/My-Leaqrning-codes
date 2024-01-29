#include<iostream>
using namespace std;
main(){
	float arr[100],temp=0,count,s,l=0;
	int i,j,n,press;
	cout<<"enter the size  of array :";
    cin>>n;
    for(i=0;i<n;i++){
	cout<<"enter the arr["<<i<<"]element :";
    cin>>arr[i];
}
 
 for(i=1;i<n;i++){
 	for(j=0;j<n-i;j++){
    if(arr[j]>arr[j+1]){
    	temp=arr[j+1];
    	arr[j+1]=arr[j];
    	arr[j]=temp;
    
	}
}
}
for(i=0;i<n;i++){
	if(arr[i+1]-arr[i]>1){
		s=arr[i]+1;
	
	}
		
}
	cout<<"press 1 . display the sorted array:";
	cout<<"\n press 2 to check the duplicay of number:";
		cout<<"\n press 3 to see smallest missing elements :";
  cin>>press;
switch(press){

case 1:
for(i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
cout<<"\n\n\n";
break;



case 2 : 

for(j=0;j<9;j++){
 count=0;
for(i=0;i<n;i++){
if(arr[i]==j){
count++;
}

}
cout<<"duplicay of numbers:";
cout<<j<<"="<<count<<endl;

}
break;
case 3 :
	cout<<"smallest mising element :";
cout<<s;
}

}
