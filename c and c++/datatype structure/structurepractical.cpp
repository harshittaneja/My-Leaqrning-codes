#include<iostream>
using namespace std;
struct tournament{
	int tournament_no;
    string  name;
    int no_of_terms;


void fun(){
	
	cout<<"enter your tournament no :";
	cin>>tournament_no;
    cout<<"enter the name :";
    cin>>name;
    cout<<"enter the number of terms:";
    cin>>no_of_terms;
	}

	
		
	
};
 main(){
	int d,k,temp=0,temp2=0;
	struct tournament t1[100];
	cout<<"enter the no of student: ";
	cin>>d;
	for(int i=0;i<d;i++){
		t1[i].fun();
	    
	}

	string temp1,s;
	for(int i=1;i<d;i++){
		for(int j=0;j<d-i;j++){
	if(t1[j].no_of_terms>t1[j+1].no_of_terms) {
	temp=t1[j+1].no_of_terms;
	temp1=t1[j+1].name;	
	temp2=t1[j+1].tournament_no;
	t1[j+1].no_of_terms=t1[j].no_of_terms;
	t1[j+1].name=t1[j].name;
	t1[j+1].tournament_no=t1[j].tournament_no;
	t1[j].no_of_terms=temp;
	t1[j].name=temp1;
	t1[j].tournament_no=temp2;
	}
}
}
		
		
	
		cout<<"highest no term have name :"<<t1[d-1].name<<endl;
        cout<<"\ntournament_no :"<<t1[d-1].tournament_no<<endl;
		cout<<"\nno_of_terms :"<<t1[d-1].no_of_terms<<endl;
		
		
		cout<<"\n\n\nlowest no term have name :"<<t1[0].name<<endl;
cout<<"\ntournament_no :"<<t1[0].tournament_no<<endl;
		cout<<"\nno_of_terms :"<<t1[0].no_of_terms<<endl;
}

