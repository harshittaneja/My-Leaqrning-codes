#include<iostream>
using namespace std;
class demo{
	public:
		int arr[12],i;
		get(){
			for(i=0;i<2;i++){
			cout<<" enter the value:";
			cin>>arr[i];
				if(arr[i]>arr[i+1]){
					if(arr[i]>arr[i+2]){
						if(arr[i+1]>arr[i+2]){
							cout<<arr[i+1];
						}
						cout<<arr[i];
					}
				}
			}
			
			
		}
		
		
		
};
main(){

	demo*p=new demo;
	p->get();
	delete p;
}
