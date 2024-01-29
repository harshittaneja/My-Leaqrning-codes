#include<iostream>

using namespace std;
main(){
 int d,m,y,leap=0;
    int legit = 0;
    cout<<"Enter the date\n";
    cin>>d; cout<<"/";cin>>m; cout<<"/";cin >>y;
	
    if(y % 400 == 0 || (y % 100 != 0 && y % 4 == 0))
        {
		leap=1;
		
		}
		else{
			leap=0;
		}
    if (m<13)
    {
        if (m == 1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12 )
            {
			if (d <=31)
                {
				legit=1;
				}
				}
				
        else if (m == 4 || m==9||m==11)
            {
			if (d <= 30)
                {
				legit = 1;
				}
				else{
					legit=0;
				}
                
				}
        else
            {
                        if (leap == 1)
                              {if (d <= 29)
                                    {legit = 1;}
									else{legit=0;
									}
									}
                        else if (leap == 0)
                              {{if (d <= 28)
                                    legit = 1;
									else{
										legit=0;
									}
									}
             }
    }
    if (legit==1)
        cout<<"It is valid date!\n";
    else if(legit==0)
        cout<<"It's not a valid date!";

}
}
