#include<iostream>
using namespace std;
class BOX{
	public:
		int length,breath,height,volume;
		void getdata(){
			cout<<"enter the length in meters :";
			cin>>length;
			call();
		cout<<" \n enter breath in meters:";
		cin>>breath;
			 called();
			cout<<" \n enter the height in meters:";
			cin>>height<<"m";
				calling();
					
			
			 
		}
		public:
			void call(){
				cout<<length<<" m";
			}
				void called(){
				cout<<breath<<" m";
			}
				void calling(){
				cout<<height<<"m ";
			}
			void vum(){
				volume=length*breath*height;
				cout<<" \n volume is ="<<volume<<" m";
			}
};
main(){
	BOX obj;
	obj.getdata();
	obj.vum();
}
