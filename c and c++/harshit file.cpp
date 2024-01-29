#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
main(){
	fstream pointer;
	string s;
	pointer.open("pointer.txt",ios::in|ios::out);
	cout<<"enter the string";
	while(pointer){
	getline(cin,s);
	pointer<<s<<" "<<endl;
}
pointer.close();
}

