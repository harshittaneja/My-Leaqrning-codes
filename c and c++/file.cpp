#include<iostream>
#include<fstream>
using namespace std;
main(){
	string h;
	fstream p;
	p.open("harshit.txt",ios::in|ios::out);
		cout<<p.tellp();//inital pointer will  show zero ass tell p couttell p
	p<<"hello";
	cout<<p.tellp()<<endl;
	p.seekg(2,ios::beg);
	p>>h;
	cout<<h;
	p.close();
}
