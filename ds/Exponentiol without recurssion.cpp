#include<iostream>
#include<math.h>
using namespace std;
main(){
	int x,i;
	float sum=1,fact=1;
	cout<<"enter the no. to find exponential ";
	cin>>x;
	  for(i=1;i<=x;i++){
	  	fact=fact*i;
	  	sum=sum+pow(x,i)/fact;
	  }
	  cout<<" e^"<<x<<"="<<sum;
}
