#include<iostream>
using namespace std;
main(){
	int sum ,rem,n;
	cout<<"enter the number:";
	cin>>n;
	while(n!=0){
		rem=n%10;
		sum=sum*10 +rem;
		n=n/10;
	}
	cout<<sum;
	
	
	
}
