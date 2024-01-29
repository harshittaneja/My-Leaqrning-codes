//try catch program using arithematic operator
#include<iostream>
using namespace std;
class abc{
	public:
		int a,b;
		char c, *e;
		get(){
			cout<<" enter the numbers1 and second:";
			cin>>a>>b;
			cout<<" \n enter the operator:";
			cin>>c;
		}
		show(){
		
		
			try
			{
				if(c=='+'){
					cout<<a+b;
				}
				else if(c=='*'){
					cout<<a*b;
				}
				else if(c=='-'){
					cout<<a-b;
				}
				else if(c=='/')
				{
					if(b==0){
						throw(" please enter the correct number ");
						//this string will catch in *e if exception is occur
					}
				}
				else
				
						throw(" !!!invalid operator!! ");
							//this string will catch in *e if exception is occur
				
		}
		
		catch( const char* e){
			cout<<e;
		}
		
	}
	
};
main(){
	//object creation
	abc obj;
	//function calling
	obj.get();
	obj.show();
	
}
