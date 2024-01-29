#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class Node
{
	public:
		int info;
		Node* next;
		
};
class List:public Node
{
	Node *first,*last;
	public:
		List()
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
void List::create()
{
	Node *temp;
	temp=new Node;
	int n;
	cout<<"\nEnter an element:\n"<<endl;
	cin>>n;
	temp->info=n;
	temp->next=NULL;
	if(first==NULL)
	{
		first=temp;
		last=first;
		
	}
	else
	{
		last->next=temp;
        last=temp;
	}
	
}
void List::insert()
{
	Node*pre,*cur;
	pre=NULL;
	cur=first;
	int count=1,pos,ch,n;
	Node *temp=new Node;
	cout<<"Enter the new element:"<<endl;
	cin>>n;
	temp->info;
	temp->next=NULL;
	cout<<"\nInsert as\n1.First Node\n2.Last Node\n3.In between first and last node"<<endl;
	cout<<"Enter your choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				temp->next=first;
				first=temp;
				break;
				
				case 2:
						last->next=temp;
						last=temp;
						break;
						
						case 3:
							cout<<"Enter the position to insert: "<<endl;
							cin>>pos;
							while(count!=pos)
							{
								pre=cur;
								cur=cur->next;
								count++;
							}
							if(count==pos)
							{
								pre->next=temp;
								temp->next=cur;
							}
							else
							cout<<"\nNot able to insert"<<endl;
							break;
		}
}

void List::delet()
{
	Node *pre=NULL,*cur=first;
	int count=1,pos,ch;
	cout<<"\nDelete\n1.First Node\n2.Last Node\n3.First and last node"<<endl;
	cout<<"\nEnter your choice"<<endl;
	cin>>ch;
	
	switch(ch)
	{
	
	case 1:
		if(first!=NULL)
		{
			cout<<"\nDeleted element is"<<first->info;
			first=first->next;
		}
		else 
		cout<<"Not able to delete"<<endl;
		break;
		
		case 2:
			while(cur!=last)
			{
				pre=cur;
				cur=cur->next;
			}
			if(cur==last)
			{
				cout<<"\nDeleted Element is: "<<cur->info;
				pre->next=NULL;
				last=pre;
			}
			else
			cout<<"\nNot able to delete"<<endl;
			break;
			
			case 3:
				cout<<"Enter the position of deletion: ";
				cin>>pos;
				while(count!=pos)
				{
					pre=cur;
					cur=cur->next;
					count++;
				}
				if(count==pos)
				{
				cout<<"\nDeleted element is: "<<cur->info;
				pre->next=cur->next;	
				}
				else
				cout<<"\n Not able to delete";
				break;
			}
}

void List::display()
{
	Node *temp=first;
	if(temp==NULL)
	{
		cout<<"/nList is empty"<<endl;

	}
	while(temp!=NULL)
	{
		cout<<temp->info;
		cout<<"-->";
		temp=temp->next;
	}
	cout<<"NULL";
}

void List::search()
{
	int value,pos=0;
	bool flag=false;
	if(first==NULL)
	{
		cout<<"List is empty";
		return;
		
	}
	cout<<"Enter the value to be searched"<<endl;
	cin>>value;
	Node *temp;
	temp=first;
	while(temp!=NULL)
	{
		pos++;
		if(temp->info==value)
		{
			flag=true;
			cout<<"Element"<<value<<"is fount at"<<pos<<"Position";
			return;
		}
		temp=temp->next;
	}
	if(!flag)
	{
		cout<<"Element"<<value<<"not found in the list"<<endl;
	}
	}

main()
{
	List l;
	int ch;
	while(1)
	{
		cout<<"\n** Menu **";
		cout<<"\n1.Create\n2.Insert\n3.Delete\n4.Search\n5.Display\n6.Exit";
		cout<<"\nEmter your choice";
		cin>>ch;
		switch(ch)
		{
			case 1:
				l.create();
				break;
				
				case 2:
					l.insert();
					break;
					
					case 3:
					l.delet();
					break;
					
					case 4:
						l.search();
						break;
						
						case 5:
							l.display();
							break;
							
							case 6:
								return 0;
				
		}
	}
	return 0;
}

