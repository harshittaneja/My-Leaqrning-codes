#include<iostream>
using namespace std;
class a{
	public:
		int x,y;
		get(){
			cin>>x>>y;
			
		}
};
class b :public a{
	public:
		show(){
			cout<<x<<y;
		}
};
main(){
	b obj;
	b *ob;
	ob=&obj;
	ob->get();
	ob->show();
	obj.show();
}
