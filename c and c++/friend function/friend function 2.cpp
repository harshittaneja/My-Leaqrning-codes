#include<iostream>
using namespace std;
class harsh{
	int x;
	public:
		void getdata(){
			cout<<"enter any number:";
			cin>>x;
		}
		friend int display(harsh);
			
};
     int display(harsh  ob){
	cout<<ob.x;
	
}
main(){
harsh   obj;
obj.getdata();
display(obj);

}


