#include<iostream>
using namespace std;
class a{
	protected:
		int x,y,sum;
		
		
		public:
			getdata(){
				cout<<"enter the numbers :";
				cin>>x>>y;
				sum=x+y;
				
				
			}
};
class b: public a{
	public:
		showdata(){
			cout<<sum;
		}
};
main(){

	b obj;
	obj.getdata();
	obj.showdata();
}
