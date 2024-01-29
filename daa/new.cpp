#include<iostream>
#include<string.h>
using namespace std;
main()
{ int l,count=0,main1,sub1,k=0;
	char main[100],sub[100];

	cout<<"Enter the main String :";
	
	gets(main);
	l=strlen(main);
	
	cout<<"Enter the sub String :";
	
	gets(sub);
	int l1=strlen(sub);
	
	for(int i=0;i<l;i++){
		if(sub[i]==main[i]){
			count+=1;
			k=count;
		}
		else{
			count=0;
		}
	   }
	   for(int i=0;i<l1;i++){
	   	cout<<sub[i]<<"";
	   }
	   cout<<"   occur "<<k<<"  times";
	}
