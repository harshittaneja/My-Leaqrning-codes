#include<iostream>
using namespace std;
class employee{
	string name;
	long employeeno;
	
	public :
		void getdata(){
			cout<<"enter employee name :";
			cin>>name;
			cout<<"\n enter employee no:";
			cin>>employeeno;
		
		}
		void putdata(){
			cout<<"\nyour name is :"<<name;
			cout<<"\n your no is:"<<employeeno;
			
		}
		
};
main(){
	char c;
	int i;
	int count=0;
	employee obj[100];
	for(i=0;i<100;i++){
		obj[i].getdata();
		count++;
		cout<<"enter y to store more record:";
		cin>>c;
		if(c=='y'||c=='Y'){
			continue;
		}
		else{
		
		}
		for(i=0;i<count;i++){
			obj[i].putdata();
		}
		break;
	}
	
}
