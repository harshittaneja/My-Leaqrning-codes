#include<iostream>
using namespace std;
main(){

int x = 10, y = 10;
int *p1 = &x;
int  *p2 = &y;
 cout<<(*p1)++<<endl;
 cout<<--(*p2)<<endl;
 cout<<*p1 + (*p2)<<endl;
 cout<<++(*p2) - *p1<<endl;
}
