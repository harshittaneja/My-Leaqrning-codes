import java.util.Scanner;

class point{


double x;
  double y;
  double dist;
  
  p  distance(point  c,point p){
    
  
 dist= math.sqrt(((c.x -p.x)*(c.x-p.x) )-((c.y-p.y)*(c.y-p.y)));
  
     
    System.out.print(dist);

  return point;
  }
}

 
public class Circle extends Point{
	 	  
     public static void main(String[] args) {
    
	 Scanner sc = new Scanner(System.in);
	 Point c=new Point(); //Create a point center
	 c.x=sc.nextDouble();
	 c.y=sc.nextDouble();
	 Point p=new Point();  //Create a point on circumference
	 p.x=sc.nextDouble();
	 p.y=sc.nextDouble(); 
	 Circle c1=new Circle(); //Create an object of class Circle
	 c1.distance(c,p);  //Calcualte radius of the circle
	
  }
 
}
