package j2;
import java.awt.*;
import java.awt.event.*;
public class guiu  extends Frame implements ActionListener{
		guiu(){
		TextField t=new TextField();
		add(t);
		setVisible(true);	
		setSize(500,500);
		Button b =new Button("press to red ");
		Button b1 =new Button("press yellow");
		Button b2 =new Button("press print harshit");
		Button b3 =new Button("remove");
		add(b);
		add(b1);
		add(b2);
		add(b3);
		setLayout(new FlowLayout());
	     b.setSize(100,100);
	     b1.setSize(100,100);
	     b2.setSize(100,100);
	     b3.setSize(100,100);
	     b.addActionListener(this);
	     b1.addActionListener(new ActionListener() {
	    	 
	    	 public void actionPerformed(ActionEvent e) {
	    				 
	    	 setBackground(Color.yellow);
	    	 }
	     });
	     
	    
	}
	public static void main(String ...d ) {	
	guiu h=new guiu();
	}
	public void ActionPerformed(ActionEvent e) {
		
	}
	@Override
	public void actionPerformed(ActionEvent e) {
		
		// TODO Auto-generated method stub
		setBackground(Color.GREEN);
	}
	}


