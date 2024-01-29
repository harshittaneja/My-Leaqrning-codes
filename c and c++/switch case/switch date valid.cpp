#include<iostream>
using namespace std;
main()
{
	int d=0,m=0,year=0;
	cout<<"enter date:";
	cin>>d>>m>>year;
	switch(m){
		case 1:  if(d>=1 &&d<=31)
		cout<<"date is valid";
		else
			cout<<"invalid";
			break;
			case 2:  if(d>=1 &&d<=28)
			cout<<"date is valid";
		else
			cout<<"invalid";
			break;
	
			case 3 : if(d>=1 &&d<=30)
			cout<<"date is valid";
		else
			cout<<"invalid";
			break;

			case 4  :if(d>=1 &&d<=31)
			cout<<"date is valid";
		else
			cout<<"invalid";
			break;
			case 5  :if(d>=1 &&d<=30)
			cout<<"date is valid";
		else
			cout<<"invalid";
			break;
			case 6  :if(d>=1 &&d<=31)
			cout<<"date is valid";
		else
			cout<<"invalid";
			break;
		
			case 7  :if(d>=1 &&d<=30)
			cout<<"date is valid";
		else
			cout<<"invalid";
			break;
		
			case 8  :if(d>=1 &&d<=31)
			cout<<"date is valid";
		else
			cout<<"invalid";
			break;
		
			case 9 : if(d>=1 &&d<=30)
			cout<<"date is valid";
		else
			cout<<"invalid";
			break;
		
			case 10  :if(d>=1 && d<=31)
			cout<<"date is valid";
		else
			cout<<"invalid";
			break;
		
			case 11 : if(d>=1 &&d<=31)
			cout<<"date is valid";
		else
			cout<<"invalid";
			break;
			case 12 : if(d>=1 &&d<=31)
		cout<<"date is valid";
		else
			cout<<"invalid";
			break;
		
	}
}
