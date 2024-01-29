class one{
int x=10;
 void get(one  this,int x ){
System.out.println(x);
System.out.println(this.x);
}
public static void main(String ... s){

one e = new one();
e.get( 2);

}
}