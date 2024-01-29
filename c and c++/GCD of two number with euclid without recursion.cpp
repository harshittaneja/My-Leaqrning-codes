//program to fing gcd of two number using euclid algorithum and without recursion 
#include<iostream>
using namespace std;
main(){
int number1=0,number2=0,gcd=0,rem,num1,num2;

cout<<"Enter the two number for GCD :";
cin>>number1>>number2; 
num1=number1;
num2=number2;
if(number1>number2){
rem =number1%number2;
while(rem>0){
	number1=number2;
number2=rem;
rem =number1%number2;
}
gcd=number2;
}

else{
rem =number2%number1;	
while(rem>0){
	number2=number1;
number1=rem;
rem =number2%number1;
}
gcd=number1;	
}
cout<<"gcd of "<<num1<<" and "<<num2<<" = "<<gcd;
}


