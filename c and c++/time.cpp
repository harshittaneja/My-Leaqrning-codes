#include<iostream>
using namespace std;
class abc{
	public:
			int h1,e,m1,hour,minutes,seconds,q,r,s1,h2,m2,s2;
		abc(){
			int hour=0,minutes=0,seconds=0,h1=0,m1=0,s1=0,h2=0,m2=0,s2=0;
			cout<<"enter t1 the hour time:";
			cin>>h1;
			cout<<"enter  t1 the minute time:";
			cin>>m1;
			cout<<"enter   t1 the second time:";
			cin>>s1;
				cout<<"enter  t2 the hour time:";
			cin>>h2;
			cout<<"enter   t2 the minute time:";
			cin>>m2;
			cout<<"enter  t2 the second time:";
			cin>>s2;
		q=m1+m2;
		r=s1+s2;		
		e=h1+h2;
					hour=   e + q/60;
					minutes=q%60;
					minutes=q +  r/60;
					seconds= r%60;
				
			
		}
	
	

	
		  abc(abc &obj){
		  	
		 	cout<<"time is"<<hour<<":"<<seconds<<":"<<minutes;
			
		}
	
		
};
main(){
	abc obj;
	abc ob(obj);

}
