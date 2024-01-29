class emp{

String name;
public static void main(String ... s){

emp e1=new emp();
e1.name="lalu";
emp e2= new emp();
e2.name="bhalu";
System.out.println(e1.name);
System.out.println(e2.name);
e1= e2;
System.out.println(e1.name);
e2=e1;
System.out.println(e1.name);


}

}