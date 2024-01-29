#include<iostream>
using namespace std;
class a{
	protected:

		class b{
			public:
				void show(){
					cout<<" !!!{}!";
				}
		};
	
};
class c:public a{
	public:
		call(){
			b obj;
			obj.show();
		}
};


main(){
c obj1;
obj1.call();

}
