#include<iostream>
using namespace std;
class a{
	protected:
	int x;
	int y;
	a()
	{
		x=10;
		y=70;
	}
	};
	class b:private  a{
		public:
			void display(){
				cout<<x<<"  "<<y;
			}
	};
	class c:protected b{
			public:
			void display2(){
				cout<<x<<"  "<<y;
			}
	};
	main(){
		  c onj;
		 onj.display2();
		
		
	}
