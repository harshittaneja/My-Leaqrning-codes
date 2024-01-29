interface one {
 void fun();
}
interface two {
default void fun(){
System.out.println("two");

}


}
public class multiple implements one ,two {

public static void main(String ... s){

multiple obj=new multiple();
obj.fun();



}


}