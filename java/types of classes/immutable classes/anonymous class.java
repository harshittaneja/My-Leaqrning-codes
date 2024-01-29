abstract class Abs
{

	public abstract void show();

}


interface inter
{
	
public void display();

}


class AB
{

	public static void main(String args[])
	{

		Abs obj=new Abs(){
		
	public void show()
{


System.out.println("Annonymous of abstract class");
			
}
		
};

		
inter obj1=new inter(){

public void display()
{
	System.out.println("Annonymous of interface");

			}
		
};
		
obj.show();obj1.display();
	
}
}