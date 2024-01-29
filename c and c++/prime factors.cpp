#include<iostream>
using namespace std; 
main(){
int num,arr[100],i=2,quotent,reminder,count=0;
cout<<"enter the for which prime factor to be check:";
cin>>num;
for(i=2;num>1;i++){
while(num%i==0){
cout<<i<<" ";
num=num/i;
}
}
}
