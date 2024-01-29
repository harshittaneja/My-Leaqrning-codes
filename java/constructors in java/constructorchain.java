class base{
int x=10;
base(){
System.out.println("base");
}
};
class child extends base{

int x=30;
child(){
System.out.println("child");
}
};
class subchild  extends child{
int x=40;
subchild(){

System.out.println("subchild");



}

public static void main(String ...s){

subchild  c1 =new subchild();

}
}
