#include<iostream>
using namespace std;
class abc{
	int x;
	int y;
	public:
		inline int display(int x, int y);
			
};
  inline abc::display(int x, int y){
  	cout<<x+y;
  	
  }
main(){
	abc s1;
	s1.display(5,6);
}
