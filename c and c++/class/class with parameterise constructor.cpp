#include<iostream>
using namespace std;
class abc{
	public:
			int hour ,minutes,second;
		abc(){
			int hour=0,minutes=0,second=0;
		}
	
	 abc(int x,int y,int z){
		  	 y  =  y  +  z/60;
	                	z= z%60;
					x= x + y/60;
				y=y%60;
			
				hour=hour+x;
				second=second+z;
				minutes=minutes+y;
			}
			disp( abc &obj1, abc &obj2){
		  	
		 	cout<<"time is"<<hour<<":"<<minutes<<":"<<second;
			
		}
	
		
};
main(){
	abc obj1(12,34,45);
    abc obj2(3,34,4);
   abc  obj3;
   obj3.disp(obj1,obj2);
}
