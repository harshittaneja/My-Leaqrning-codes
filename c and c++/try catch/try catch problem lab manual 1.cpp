//simple exception example
#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	float d=0;
	cout<<"enter the value of a:";
	cin>>a;
	cout<<"\n enter the value of b ";
	cin>>b;
	cout<<"\n enter the value of c:";
	cin>>c;
	try{
		if((a-b)!=0)
		{
			d=c/(a-b)\;
			cout<<" result is :"<<d;
			
		}
		else{
			//throwing integer type value
			throw(a-b);
		}
	}
	//this will caught integer type value
	catch(int i){
		cout<<" answere is infinite because a-b is:"<<i;
		
	}
	return 0;
}

