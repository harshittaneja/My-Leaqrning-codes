#include<iostream>
#include<string.h>
using namespace std;
main(){
	int i=0,j=0,s=0,k=0;
	char pattern[100],ans[100];
	char original[100],replace[100];
	cout<<"enter the original string:";
	gets(original);
	cout<<"\n enter the pattern string :";
	gets(pattern);
	cout<<"\n enter the replace string :";
	gets(replace);
	while(original[i++]!='\0'){
	
	if(original[i++]==pattern[j++]){
			
		if(pattern[j++]!='\0'){
	
		pattern[j++]=replace[s++];
	
		
		}
		else{
			j=0;
		}
		
	}


		ans[k++]=replace[s++];
ans[i++]=original[i++];

}
	
	for(k=0;k<30;k++){
	
	cout<<ans[k];
}
}
