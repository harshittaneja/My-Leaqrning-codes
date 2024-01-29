#include<iostream>
using namespace std;
main(){
	int num,i,temp=0;
	for(num=2;num<100;num++){
		for(i=2;i<=num/2;i++){
			if(num%i==0){
				temp++;
			}
		}
		
		if(temp==0){
			cout<<num<<" ";
		}
		temp=0;
	}
}
