#include<iostream>
using namespace std;
main(){
int num,sum=0,rem=0,c=0;
cout<<"enter the number to check :";
cin>>num;
c=num;
while(num>0){
 rem=num%10;
 sum=sum*10 +rem;
num=num/10;
}
if(sum==c){
cout<<sum;
cout<<"number entered is palidrome";
}
else{
cout<<sum;
cout<<"number entered is not  palidrome";
}
}

