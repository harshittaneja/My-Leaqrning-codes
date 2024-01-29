// we use protected formate specifire here with data type
//protected members can be called inside the class and inhertited class but not i the main function
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
	class b:public a{
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
		 cout<<onj.x;
		
		
	}
