#include<iostream>
using namespace std;
 
 main()
{
int i, j;
int arr[10][10],arr1[10][10],arr2[10][20];
for(i=0;i<=10;i++){

for(j=0;j<=10;j++){
cout<<"enter the   matrix";
cin>>arr[i][j];
cout<<"enter the second matrix";
cin>>arr1[i][j];
arr2[i][j]=arr[i][j]*arr[j][i];
cout<<arr[i][j];
}
}
}


