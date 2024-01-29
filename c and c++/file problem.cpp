#include<iostream>
#include<fstream>
using namespace std;
main(){
	fstream pointer;
	string  s;
	pointer.open("pointer.txt",ios::in|ios::out);
	cout<<"enter the string";
	while(1){
if(s!="break"){
	cin>>s;
	pointer<<s<<" "<<endl;
	
}
else{
pointer.close();
	
}

}
}

