#include<iostream>
using namespace std;
class abc{
	public:
		void mul(int);
};
void abc::mul(int a){
	int i;
	cout<<"enter the number:";
	cin>>a;
for(i=0;i<=10;i++){
cout<<a<<"*"<<i<<"="<<a*i;
cout<<"\n";
}
}
main(){
	int a;
	int i;
	abc obj;
	obj.mul(0);
}
