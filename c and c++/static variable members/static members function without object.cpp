#include<iostream>
using namespace std;
class abc{
	public:
		static void display(){
			cout<<"hello ";
		}
		
};
main(){
	abc::display();
}
/*note static function when used no object is required for calling use class name*/
