#include <iostream>

using namespace std;
int main()
{
    int a[100],b[100],n,count=0,count1=0;
    for(int i = 0; i<3; i++) {
      cin>>a[i];
      }
      for(int i=0;i<3;i++){
          cin>>b[i];
      }

    

    for (int i=0; i <3; i++){
       if(a[i]<b[i]){
           count++;
       }
       else if(a[i]>b[i]){
           count1++;
       }

    
    }
    cout<<"["<<count1<<","<<count<<" ]";


}

