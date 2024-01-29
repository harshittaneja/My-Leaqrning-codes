#include<iostream>
using namespace std;
main(){
int pivot,i,j,n,k,arr[100],temp;
cout<<"enter the array width :";
cin>>n;
cout<<"enter the array elements:";
for(i=1;i<=n;i++){
cin>>arr[i];
}
cout<<"enter the pivot present :";
cin>>k;
pivot=arr[k];
cout<<endl<<pivot;
j=n;
while(i<j){
         while(arr[i]<=pivot&&i<j)
            i++;
         while(arr[j]>pivot)
            j--;
         if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }
 
 for(i=1;i<=n;i++){
 	cout<<endl<<arr[i];
 }
}









