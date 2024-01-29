package j2;

import java.awt.FlowLayout;
import java.util.Scanner;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JButton;

public class harshit{
	public static void main(String ...s) {
		abc obj=new abc();
	
	
obj.show();
	
	}
}

class abc extends JFrame//earlier we use card layout
{
public abc()
{
	JTextField t1=new JTextField(20);
	JTextField t2=new JTextField(20);
	System.out.println();
	JButton b=new JButton("ok");
	setLayout(new FlowLayout());//show output above in center
	
	//add text hello word to frame
	
	add(t1);
	add(t2);
	add(b);
	setVisible(true);//shows box  inbult function of jframe class
	setSize(400,400);//set size of box swing pakage function(width,heigth) 
  setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);//or set....operation(3)in function

}

}
