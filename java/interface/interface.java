interface my{

void show();
}//semicolon is to compuls0ry

class child implements my{

public void show(){
System.out.println("child");
}
public static void main(String ...s){

child c1= new child();
c1.show();

}
}