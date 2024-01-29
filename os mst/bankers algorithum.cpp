#include<iostream>
using namespace std;
main(){
	int i,totalresources,`n,free,diff,sum,a,need=0,resources[100],required[100];
	cout<<"enter the number of processes :";
	cin>>n;
	cout<<"enter the total  no of resources :";
	cin>>totalresources;
	for(i=0;i<n;i++){
		cout<<"enter the resouces allocated to p["<<i<<"] :";
		cin>>resources[i];
		sum=sum +resources[i];
		
		
	}
	free=totalresources-sum;
	cout<<"free resources :"<<free<<endl;
		for(i=0;i<n;i++){
	cout<<"enter the resouces required to p["<<i<<"] :";
		cin>>required[i];
need =neeed+required[i];
}
int c=0;
while(need>0){
	for(c=0;c<n;c++){
	free=resources[i]+	required[c]
		if(free>=required[c]){
			free=
			cout<<"process completed :"<<required[c];
			p[a]=c+1;
			a++;
			need=need-required[c];
			required[c]=0;
			
		}
		if(need==0){
			break;
		}
	}
}
cout<<"safe seuence is ";
for(i=0;i<a;i++){
	cout<<p[i]<<endl;
}
}
