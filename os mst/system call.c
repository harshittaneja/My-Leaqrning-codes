#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/wait.h>
int  main(int arc ,char *ar[]){
int pid;
char s[100];
pid=fork();
if(pid<0){
printf("error");
}
else if(pid>0){
wait(NULL);
printf("\n parent process :%d \t",getpid());
execlp("cat","cat",ar[1],(char*)0);
}
else{
printf("\n child  process :%d \t",getppid());
write(1,s,strlen(s));
printf(" ");
printf(" ");
printf(" ");
execvp(ar[2],& ar[2]);
}













}
