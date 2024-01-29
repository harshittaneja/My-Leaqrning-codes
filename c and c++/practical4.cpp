#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
#include<time.h>
#include<fcntl.h>

void main(int ag, char* arg[])
{

char buf[100];
struct stat s;
int fd1,fd2,n;
fd1=open(arg[1],0);
fd2=create(arg[2],0777);
stat(arg[2],&s);
if(fd2==-1)
printf("error in creation");
while((n=read(fd1,buf,sizeof(buf)))>0){
if(write(fd1,buf,n)t!=n)
{
close(fd1);
close(fd2);
}
}
printf("\n UID FOR FILE.........>%d \n FILEACCESS TIME......>%s \n FILE MODIFIED TIME.........>%s \n FILE I-MODE NUMBER ........>%ld \nPERMISSION FOR FILE...........>%d",s.st_uid,ctime(&s.st_atime),ctime(&s.st_mtime),s.st_ino,s.st_mode);
close(fd1);
close(fd2);  

}

















}
