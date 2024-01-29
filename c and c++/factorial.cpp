#include<iostream>
using namespace std;
int fact(int s){
if (s==0||s==1){
	return 1;
}
else {
	return s*fact(s-1);
}	







}
main(){
	int n,z;
	cout<<"enter the number which you want to calculate factorial:";
	cin>>n;
	z=fact(n);
  cout<<"factorial of number is :"<<z;
}
