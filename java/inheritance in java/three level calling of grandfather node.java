class base{
int x=10;
};
class child extends base{

int x=30;
};
class subchild  extends child{
int x=40;
void show(){

System.out.println(x);
System.out.println(((child)this).x);
System.out.println(((base)this).x);
System.out.println(super.x);


}

public static void main(String ...s){

subchild  c1 =new subchild();
c1.show();

}
}
