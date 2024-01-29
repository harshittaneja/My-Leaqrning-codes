#include<iostream>
using namespace std;
main(){
	char str[100],pat[50],rep[50],ans[100];
	int pt, st,size,an,re,flag=0;
pt=0,st=0,size=0,an=0;
cout<"enter the main string :";
gets(str);
cout<"enter the pattern string :";
gets(pat);
cout<"enter the replace  string :";
gets(rep);
while((str[size])!='\0'){
	
if(str[st]==pat[pt]){
	pt++;
	st++;

if(pat[pt]=='\0'){
	flag=1;
	for(re=0;rep[re]!='\0';re++,an++){
		ans[an]=rep[re];
	
	pt=0;
	size =st;
	}}
else{
	ans[an]=str[size];
an++;
size++;
st=size;
pt=0;
}
}
ans[an]='\o';
}
}
