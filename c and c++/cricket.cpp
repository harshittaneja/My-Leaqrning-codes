#include<iostream>
#include<string.h>
using namespace std;
struct Cricket{
	char Player_Name[10];
	string Team_Name;
	int Average; 

get(){
	cout<<"enter the player name :";
	fflush(stdin);
	gets(Player_Name);
	fflush(stdin);
	cout<<"enter the average :";
	cin>>Average;
	cout<<"enter the team name :";
	cin>>Team_Name;
}
display(){
	cout<<"\n";
	cout<<Player_Name<<endl;
	cout<<Team_Name<<endl;
	cout<<Average<<endl;
}

};
main(){
	int n;
	struct Cricket obj[10];
	cout<<"enter the size of array :";
	cin>>n;
	for(int i=0;i<n;i++){
		obj[i].get();
		obj[i].display(); 

	}
	
}
