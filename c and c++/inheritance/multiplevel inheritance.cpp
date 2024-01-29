#include<iostream>
using namespace std;
main(){

cout<<"\n#include<iostream>\nusing namespace std;\nclass a{\npublic:\nint x,y;\n};\nclass b:public a{\npublic:\nget(){\ncout<<'enter the value of x and y:';\ncin>>x>>y\n}\n};\nclass c:public b{\npublic:\nshow(){\ncout<<'multiplication of x and y is:'<<x*y;\n}\n};\nmain(){\nc obj;\nobj.get();\nobj.show()\n}";
}
