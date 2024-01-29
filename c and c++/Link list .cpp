#include<iostream>
using namespace std;
class node
{
	public:
		int info;
		node* next;
		
};
class list:public node
{
	
	node   *first,*last;
	
public:
	list()
	{
		first=NULL;
		last=NULL;
	}
	void create();
	void insert();
	void delet();
    void display();
    void search();

};
void list::create()
{
	node*temp;
	temp=new node;
	int n;
	cout<<"\n enter the elements:";
	cin>>n;
	temp->info=n;
	temp->next=NULL;
	if(first==NULL)
	{
		first=temp;
		last=first;
	}
	else{
		last->next=temp;
	   last=temp;
	}
}
void list::insert()
{
	node *prev ,*cur;
	prev=null;
	cur=first;
	int count=1,pos,ch,n;
	node *temp=new node;
	cout<<"\nInsert AS\n 1:first node\n 2 last element\n 3:In between firt and last";
	cin>>ch;
	switch(ch){
		
		case:1
		temp->next=first;
		first=temp;
		break;
		
		}
		case:2
	cout<<"\n enter the position to insert";
	cin>>pos;
	while(count!=pos){
		prev=cur;
		cur=cur->insert;
		count++;
		}
		if(count=pos){
			prev->next=temp;
			temp->next=cur;
		}
		else{
			cout<<"not able tom insert";
			break;
		}
	}
	void list:delete(){
		node *perv=NULL,*cur=first;
		cout<<"\n delete\n 1:first node\n 2:last node\n 3:betwwen first and last nodes";
		cin>>ch;
		switch(ch){
			case 1:
				if(first!=null){
					cout<<"\n delete element is"<<first->info;
					first=first->next;
				}
				else
					cout<<"\n not able to delete";
					break;
					
				case 2:
					while(cur=last){
						prev=cur;
					cur=cur->next;	
					}
					if(cur==last){
						cout<<"\n delete element is"<<cur->info;
						prev->next==NULL;
						last=prev;
						
					}
					else
					cout<<"\n not able to delete";
					
				case 3:
					cout<<"\n enter the position of deletion";
					cin>>pos;
					while(count!=pos){
						prev=cur;
						cur=cur->next;
						count++;
					}
	            	if( count==pos){
	            		cout<<"\n deleted elements is:"<<cur->info;
	            		prev->next=cur->next;
	            	}
	            	else
	            	cout<<"\n  not able to delete";
	            	break;
	            	}
	            }
	            void List::display()
{
	Node *temp=first;
	if(temp==Null)
	{
		cout<<"/nList is empty"<<endl;

	}
	while(temp!=Null)
	{
		cout<<temp->info;
		cout<<"-->"
		temp=temp->next;
	}
	cout<<"Null";
}

	            void list::search(){
	            	int value,pos=0;
	            	bool flag=false;
	            	if(first==NULL){
	            		cout<<"\n list is empty";
	            		return;
	            	}
	            	cout<<"enter the value to be searched:";
	            	cin>>value;
	            	node *temp;
	            	temp=first;
	            	while(temp!=NUll){
	            		pos++;
	            		if(temp->info==value){
	            			flag=true;
	            			cout<<"elements"<<value<<" is found at"<<pos<<"position";
	            			return;
						}
						temp=temp->next;
					}
						if(flag){
							cout<<"elements"<<value<<"not found in list";
						}
						
					}
					
					
					
				int main(){
					list l;
					int ch;
					while(1){
						cout<<"\n ** MENU **";
						cout<<"\n1:CREATED \n2 : Insert\n 3: search"
					}
					
				}

		

