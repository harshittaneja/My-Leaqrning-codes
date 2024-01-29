#include<iostream>
#include<stdlib.h>
using namespace std;
int  *stack,size,top= 0,max,choice,item,temp[100],k,i;
push(int size){

	if(top==size){
			cout<<"stack is full :";
			
		}
		else{
			cout<<"enter the value to pushed :";
			cin>>item;
			cout<<" position = "<<top<<"  pushed item :"<<item;
	    stack[top++]=item;
		
}
}
pop(){

	if(top==0){
		cout<<"stack underflow :";
		
	}
	else{
	top--;
		temp[k++]=stack[top];
		cout<<"\n position : "<<top<<" popped value "<<stack[top];
	}
		
}
display(){
	
	cout<<"\n stack size :"<<top<<endl;
			for(i=0;i<top;i++ ){
				cout<<"position :"<<i<<" elments :"<<stack[i]<<endl;
			}
				
}
main(){
int max;
char j='y';
cout<<"enter the size of stack (max value ): ";
cin>>size;
stack =(int *)malloc(size*(sizeof(int)));
while(j=='y'){

cout<<"\n 1.For push \n 2.pop \n 3.display ";
cout<<"\nenter the choices:";
cin>>choice;
switch(choice){

	
	case 1:
		
		push(size);
	cout<<"\n press y to continue and n to discontinue :";
		cin>>j;	
	break;
		
		
	case 2:
	pop();
	cout<<"\n press y to continue and n to discontinue :";
		cin>>j;	
	break;
		
		case 3:
			display();
			cout<<"\n press y to continue and n to discontinue :";
		cin>>j;	
			break;
			default:
		cout<<"OOPS SOMETHING WENT WRONG ";
			cout<<"\n press y to continue and n to discontinue :";
		cin>>j;	
		break;
		}
	
			
}
}

