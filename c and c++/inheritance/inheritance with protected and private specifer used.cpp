#include<iostream>
using namespace std;
class a{
	protected:
		int x=23, y=11;
		
};
class b: protected a{
	public:
		void show()
		{
			
		
		cout<<x;
	}
		
};
class c:private b{
	public:
		void disp()
		{
			cout<<y;
		}
		
};
main(){
	b  obj;
	obj.show();
	//obj.disp();
	c obj2;
	obj2.disp();
	

	
}
