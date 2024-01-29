#include<iostream>
#include<fstream>
using namespace std;
main(){
	fstream file;
	string ch;
	file.open("sample.txt",ios::out);
	if(!file){
		cout<<"error is creating file!!!!";
	}
	file<<"current position is: ";
	cout<<file.tellp()<<endl;
	file.close();
	file.open("sample.txt",ios::in);
	cout<<"After opening file"<<file.tellg()<<endl;
	
 	while(!file.eof()){
		cout<<"at position :"<<file.tellg();
		file>>ch;
		cout<<ch<<endl;
	}
	file.close();
}
