//program making custom class to catch the exception
//in this code we are going to create a class inherit exception class then can catch object as input error occur
#include<iostream>
#include<exception>
using namespace std;
//class inherit exception class
class abc: public exception{
	//what function call below if error occur by z.what()
public:
	const char *what() const throw(){
		cout<<" invalid input";
	}
};
main(){
	int marks1,marks2,n,i;
	cout<<" enter the number of student add:";
	cin>>n;
	
	for(i=0;i<n;i++){
	cout<<" enter the marks of "<<i<<" student in both subject 1 and 2:";
	cin>>marks1>>marks2;
	
	try{
		if(marks1>100&&marks2>100){
			//class object
			abc z;
			//object is hrown
			throw z; 
		}
		else if(marks1<40&&marks2<40){
			cout<<" failed";
			
			
			
		}
	}
	//catching object as parameter
		catch(abc z){
			z.what();
		}
		
	

	}
	
}
