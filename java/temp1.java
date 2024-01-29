class temp{

int x=10;

void show(int x ,temp this){

System.out.println(this.x);
System.out.println(x);

}
public static void main(String ... s){

temp  s1 =new temp();
s1.show(20);

}


}