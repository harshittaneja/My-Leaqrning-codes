#include<iostream>
#include<exception>
using namespace std;
class yash:public exception{
	public:
		const char*what() const throw()
		{
			return "out of bound";
		}
		
};
main(){
  int x,n,a,arr[100];	
	cout<<" enter the number to entered by user:";
	cin>>n;
	for(x=0;x<n;x++){
		cout<<" enter the "<<x+1 <<"number:";
		cin>>arr[x];
	}
	for(x=0;x<n;x++){
		cout<<x+1<<"="<<arr[x]<<endl;
		
	}
	cout<<"enter the pick  index element";
	cin>>a;
	try{
		if(a>n)
		{
			yash z;
			throw z;
			
		}
		else
		{
			cout<<arr[a-1];
		}
			
		}
		catch(yash z){
			cout<<z.what();
		}
	}
	






















































































