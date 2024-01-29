class dada{
 dada(){
System.out.println("b1");
}
};
class papa extends dada{
papa(int x){
System.out.println("super");

}
};
class child extends papa{
child(){
System.out.println("b3");
}
 public static void main(String ... s){
 child c1=new child();

}


}