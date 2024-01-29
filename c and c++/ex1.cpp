#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream pointer;
	pointer.open("sample.txt",ios::in);//if file is not present it will not created automatically but it automatically created in ios::out
	//mode automatically
	pointer.close();
}
