#include<iostream>
using namespace std;
class  abc{
	public:
		int x,y;
		abc(){
			cin>>x;
			cin>>y;
			cout<<x+y;
		}
		~abc(){
			cout<<"  ";
		}
	
};
main(){
	
	abc  obj;
	cout<<obj.x;
	
}
