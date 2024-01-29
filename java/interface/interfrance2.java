interface my{

public abstract void  show(){
System.out.println("interface");
}

}//semicolon is to compuls0ry

class child implements my{


public static void main(String ...s){

my c1= new child();
c1.show();

}
}