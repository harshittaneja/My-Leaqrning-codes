class harsh{

public static void main(String ...s){

try{
int x=10/s.length;
int z[]=new int[s.length];
  z[10] = 1000;
}

catch(ArithmeticException e){
System.out.println(e);
}

catch(ArrayIndexOutOfBoundsException r){

System.out.println(r);

}


}
}