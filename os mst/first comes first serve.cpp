#include<iostream>
using namespace std;
main(){
	int temp3=0,a[20],arrival[20],burst[20],comp[20],ta[20],w[20],n,i,sum=0,sumta=0,sumw=0,j,temp=0,temp1=0;
	cout<<"Enter the number of processes:";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"Enter the process number:";
		cin>>a[i];
		cout<<"Burst time of P "<<i+1<<":\n";
		cin>>burst[i];
		cout<<"arrival time of P "<<i+1<<":\n";
		cin>>arrival[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
	if(arrival[j]>arrival[j+1]){
		temp1=a[j];
		temp=burst[j];
		temp3=arrival[j];
		a[j]=a[j+1];
		burst[j]=burst[j+1];
		arrival[j]=arrival[j+1];
		a[j+1]=temp1;
		arrival[j+1]=temp3;
		burst[j+1]=temp;
	}
}
	}
	for(i=0;i<n;i++){
		sum=sum+burst[i];
		comp[i]=sum;
		ta[i]=comp[i]-arrival[i];
		sumta=sumta+ta[i];
		w[i]=ta[i]-burst[i];
		sumw=sumw+ w[i];
}
cout<<"Processes      BurstTime      CompletionTime      TurnAroundTime        WaitingTime           arrivalTime\n";
for(i=0;i<n;i++){
	cout<<" P "<<a[i]<<" \t\t "<<burst[i]<<"  \t\t "<<comp[i]<<"   \t\t\t"<<ta[i]<<"  \t\t\t"<<w[i]<<"  \t\t\t"<<arrival[i]<<"\n";
}
cout<<"Average TurnAround Time:"<<(float)sumta/n;
cout<<"\nAverage Waiting Time:"<<(float)sumw/n;
}
