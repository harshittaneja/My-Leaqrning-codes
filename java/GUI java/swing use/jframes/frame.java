import java.util.Scanner;
import javax.swing.JFrame;
import javax.swing.JLabel;
public class frame{
	public static void main(String ...s) {
		abc obj=new abc();
	
	
obj.show();
	
	}
}

class abc extends JFrame
{
public abc(){
	
	JLabel l=new JLabel("hello world");
	add(l);//add text hello word to frame
	setVisible(true);//shows box  inbult function of jframe class
	setSize(500,500);//set size of box swing pakage function(width,heigth) 
}

}
