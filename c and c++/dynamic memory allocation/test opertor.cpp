#include<iostream>
using namespace std;
int cube(int x);
float cube (float y);
int main(){
	int a=5;
	float b=5.5;
	cout<<" cube of integer number:"<<a<<"is"<<cube(a)<<endl;
	cout<<"cube of float number:"<<b<<"is"<<cube(b)<<endl;
	return 0;
}
int cube(int x){
	return x*x*x;
}
float cube( float y){
	return y*y*y;
}
