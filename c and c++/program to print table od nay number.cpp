#include<iostream>
using namespace std;
main(){
	int i,n;
	cout<<"enter the number for which you want table:";
	cin>>n;
	for(i=0;i<=10;i++){
		cout<<n<<"*"<<i<<" ="<<i*n<<endl;
	}
}
