package j2;
import java.awt.*;
class gui{
	 gui(){
Frame f =new Frame();
f.setSize(500,500);
f.setVisible(true);
Button b1 =new  Button("1");
Button b2 =new  Button("2"); 
Button b3 =new  Button("3");
Button b4 =new  Button("4");
Button b5 =new  Button("5");
b1.setSize(100,100);
b2.setSize(100,100);
b3.setSize(100,100);
b4.setSize(100,100);
f.setBackground(Color.gray);
f.setLayout( new FlowLayout());
f.add(b1);
f.add(b2);
f.add(b3);
f.add(b4);
f.add(b5);

	 }
 }









class main
{
public static void main(String ...d ) {	
	
	gui obj=new gui();
	
	
	
}
}