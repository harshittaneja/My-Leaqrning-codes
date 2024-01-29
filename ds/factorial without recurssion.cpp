#include<iostream>
using namespace std;
main(){
int n,sum=1,i;
cout<<"Enter the number ";
cin>>n;
for(i=1;i<=n;i++){
	sum=sum*i;
}
	cout<<"factorial without recurssion = "<<sum;
}
