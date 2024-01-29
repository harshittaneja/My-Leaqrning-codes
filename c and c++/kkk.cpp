#include<iostream>
#include<fstream>
using namespace std;
main(){
	//this code frist take data wnhen you apply break after that it work goes to back to intial and get to begninig to show on console window  
		fstream pointer;
		string data;
	pointer.open("pointer.txt",ios::in | ios::out | ios::trunc);
	cout<<"enter the string :"<<endl;
	while(1)
	{
	getline(cin,data);
	if(data == "break")
	{
		break;
	}
	else
	{
			pointer<<data<<endl;
			
	}
}
	pointer.seekg(-1,ios::beg);//position specify to pointer then go to begning
	while(!pointer.eof()){
		getline(pointer,data);
		//pointer>>data;
		cout<<data<<endl;
	}

	
pointer.close();
}
