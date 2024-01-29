#include<iostream>
using namespace std;
int front=0,rear=0,queue[100],item;

Inqueue(int max){
	if(rear==max){
		cout<<"stack overflow:";
	}
	
		
	
	else{
		cout<<"enter the item to be inqueue in queue :";
		cin>>item;
		queue[rear]=item;
	front=front+1;
		rear=rear+1;
	}

}
dequeue(int max){
if(front==0){
	cout<<"queue underflow :";
	}
else{
cout<<"item dequeue is :"<< queue[front-1]<<" position :"<<front;
queue[front]='\0';
front =front+1;
}

}	

		
display(){
	for(int i=0;i<rear;i++ ){
				cout<<"position :"<<i<<" elments :"<<queue[i]<<endl;
			}
}
main(){
	int max,n;
	cout<<"enter the size of queue:";
	cin>>max;
	char j='y';
	while(j=='y'){
	
	cout<<"\n 1.For inqueue \n 2.pop \n 3.display ";
	cin>>n;
	switch(n){
		case 1:
			Inqueue(max);
			cout<<"press y to continue and n to discontinue :";
		cin>>j;
				
			
			break;
			case 2:
				dequeue(max);
					
				
				break;
				case 3:
					display();
					break;
	}
}
}
