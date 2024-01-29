class base{


 class child{
child(){
System.out.println("hello");
}
};
};
public class nested extends base{

public static void main(String ...s){

base b =new base();
child  c1 =b.new child();


}
}
