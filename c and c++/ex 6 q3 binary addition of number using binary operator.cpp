#include<iostream>
using namespace std;
class INT{
	public:
		int int_a;
		INT(){
			int_a=0;
		}
		INT operator+(INT obj2)
		{
			INT sum;//class object inside operator;
			sum.int_a=int_a +obj2.int_a;
			return sum;
		}
		display(){
			cout<<" sum is: "<<int_a;
		}
};
main(){
	INT obj1=1,obj2=3,obj3;
	obj3=obj1+obj2;
	obj3.display();
	cout<"\n press c to continue or any key to exit";
	
}
