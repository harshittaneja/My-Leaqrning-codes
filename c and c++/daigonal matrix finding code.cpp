#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int arr[10][10],n,sum=0,sum1=0 ;
cin>>n;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
    cin>>arr[i][j];
}
}

  for (int i = 0; i < n; i++) 
    { 
        for (int  j = 0; j <n; j++) 
        { 
            // finding sum of primary diagonal 
            if (i == j){
            
                sum =sum + arr[i][j]; 
}
            // finding sum of secondary diagonal formula must remeber
            else if(i == n - j - 1) {
            
                sum1 =sum1 + arr[i][j]; 
        
        } 
    }
}
int total =sum1 + sum;
 total=sqrt(total*total);
cout<<total;
}




