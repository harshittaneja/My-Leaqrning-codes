#include<iostream>
using namespace std;
class a{
	public:
		void getdata1(){
			cout<<" the";
		}
		protected:
			void putdata(){
				cout<<" hello";
			}
			private:
			int z;
			public:
			a(){
				z=10;
			cout<<z;
			}
			
};
class b: public a{
	public:
		void getdata1(){
			cout<<" world";
		}
		protected:
			void putdata(){
				cout<<" hello";
			}
			private:
			int x=10;
			cout<<x;
			
			}
};
class c :protected a{
	public:
		void getdata1(){
			cout<<" the";
		}
		protected:
			void putdata(){
				cout<<" hello";
			}
			private:
			int z=10;
			cout<<z;
			
			}
};
class d :private a{
	public:
		void getdata1(){
			cout<<" the";
		}
		protected:
			void putdata(){
				cout<<" hello";
			}
			private:
			int w=10;
			cout<<w;
			
			}
};
main(){
	b obj;
	obj.display();
}
