#include<iostream>
using namespace std;
main()
{
	int n,f1=0,i,f2=1,f3,j=0,count=0,arr[100],k;
	cout<<"enter the limit:";
	cin>>n;
		cout<<f1<<" "<<f2<<" ";
	for(int i=0;i<n;i++){
		f3=f1+f2;
		f1=f2;
		f2=f3;
		cout<<f3<<" ";
		if(f3-f1>1){
			for(k=f1+1;k<f3;k++){
				arr[j]=k;
				j++;
				count++;
				
			}
		}
	}
	cout<<"\n\n";
	cout<<"missing terms are:";
	for(j=0;j<count;j++){
		cout<<arr[j]<<"\t";
	}
	return 0;
}
