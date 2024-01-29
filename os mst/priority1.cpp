#include<iostream>
using namespace std;
main(){
	int a[20],p[20],b[20],c[20],pr[100],turnaroundtime[20],waitingtime[20],n,i,sum=0,sumturnaroundtime=0,sumwaitingtime=0,j,temp=0,temp1=0,temp2=0,temp3=0;
	cout<<"Enter the number of processes:";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"Enter the process number:";
		cin>>p[i];
		cout<<"Arrival time of process :" ;
		cin>>a[i];
		cout<<"Burst time of P "<<i+1<<":\n";
		cin>>b[i];
			cout<<"enter the priority :";
	cin>>pr[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
	if(pr[j]>pr[j+1]){
		temp1=a[j];
		temp2=p[j];
		temp3=pr[j];
		temp=b[j];
		p[j]=p[j+1];
		a[j]=a[j+1];
		b[j]=b[j+1];
		pr[j]=pr[j+1];
		a[j+1]=temp1;
		b[j+1]=temp;
		p[j+1]= temp2;
		pr[j+1]=temp3;
	}
}
	}
	for(i=0;i<n;i++){
		sum+=b[i];
		c[i]=sum;
		turnaroundtime[i]=c[i]-a[i];
		sumturnaroundtime+=turnaroundtime[i];
		waitingtime[i]=turnaroundtime[i]-b[i];
		sumwaitingtime+=waitingtime[i];
}
cout<<"Processes    Arrival time  Burst Time      priority      Completion Time      Turn Around Time        Waiting Time\n";
for(i=0;i<n;i++){
	cout<<" P "<<p[i]<<"\t\t "<<a[i]<<" \t\t "<<b[i]<<" \t\t "<<pr[i]<<" \t\t "<<c[i]<<"   \t\t\t"<<turnaroundtime[i]<<"  \t\t\t"<<waitingtime[i]<<endl;
}
cout<<"Average TurnAround Time:"<<(float)sumturnaroundtime/n;
cout<<"\nAverage Waiting Time:"<<(float)sumwaitingtime/n;
}
