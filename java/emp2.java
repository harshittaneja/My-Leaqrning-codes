class emp2{
int x=10;
void get(){

System.out.println(this);//this shows referenece variable has referenece id same as this value after (this also have  same value as reference variable
}
public static void main(String ... s){

emp2 e = new emp2();
e.get();
System.out.println(e);
}
}