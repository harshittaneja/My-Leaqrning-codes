  import java.util.Scanner;
 public class harsh
{
public static void main(String... p)
//variable length argument
{
int i=0,count=0;
Scanner s =new Scanner(System.in);
String s1 = s.next();
char[] ch=s1.toCharArray();
for(char c ='a';c<='z';c++){
 count=0;
for(i=0;i<ch.length;i++){
if(ch[i]==c){
count++;
}
}
System.out.println(c+"="+ count);
}
}
}


