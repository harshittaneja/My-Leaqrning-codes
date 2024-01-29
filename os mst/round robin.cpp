#include<iostream>
using namespace std;
main(){
	int a[20],j=0,k,arrival[20],burst[20],comp[20],ta[20],w[20],n,i,timequantum=0,temp=0,total=0,newburst[100],sumta=0,sumw=0;
	cout<<"Enter the number of processes:";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"Burst time of P "<<i<<":\n";
		cin>>burst[i];
		newburst[i]=burst[i];
		total =total +burst[i];
		
	}
	cout<<"enter the time quantum:";
	cin>>timequantum;
while(total>0){

		
for(j=0;j<n;j++){
	if(burst[j]>0)
	{
	
	if(burst[j]>timequantum)
	{
temp=temp+timequantum;
burst[j]=burst[j]-timequantum;
comp[j]=temp;
total=total-timequantum;
		
				}
				
				else if (burst[j]<=timequantum ){
						temp=temp+burst[j];
						comp[j]=temp;
						total=total-burst[j];
						burst[j]=0;
					
				}
			}
			}
		}
		for(i=0;i<n;i++){
		ta[i]=comp[i];
			sumta=sumta+ta[i];
		w[i]=ta[i]-	newburst[i];
		sumw=sumw+ w[i];
		
}
cout<<"Processes      BurstTime      CompletionTime      TurnAroundTime        WaitingTime           \n";
for(i=0;i<n;i++){
	cout<<" P "<<i<<" \t\t "<<	newburst[i]<<"  \t\t "<<comp[i]<<"   \t\t\t"<<ta[i]<<"  \t\t\t"<<w[i]<<"  \t\t\t"<<"\n";
}
cout<<"Average TurnAround Time:"<<(float)sumta/n;
cout<<"\nAverage Waiting Time:"<<(float)sumw/n;

}
