package j2;

import java.awt.FlowLayout;
import java.util.Scanner;
import javax.swing.JFrame;
import javax.swing.JLabel;
public class harshit{
	public static void main(String ...s) {
		abc obj=new abc();
	
	
obj.show();
	
	}
}

class abc extends JFrame//earlier we use card layout
{
public abc()
{    setLayout(new FlowLayout());
	JLabel l=new JLabel("hello world");
	//add text hello word to frame
	JLabel l1=new JLabel("welcome harshit");
	add(l);
	add(l1);
	setVisible(true);//shows box  inbult function of jframe class
	setSize(500,500);//set size of box swing pakage function(width,heigth) 
  setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);//or (3)in function
}

}
