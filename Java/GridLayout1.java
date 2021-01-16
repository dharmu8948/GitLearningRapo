////program to demonstration of GridLayout
import java.awt.*;
import java.applet.*;
public class GridLayout1 extends Applet
{
	Label l1,l2;
	TextField t1,t2;
	Button b1,b2;
	public void init()
	{
		l1=new Label("Enter User Name");
		t1=new TextField(15);
		l2=new Label("Enter Your Password");
		t2=new TextField(15);
		t2.setEchoChar('*');
		b1=new Button("SUBMIT");
		b2=new Button("CANCLE");
		setLayout(new GridLayout(3,2));
		add(l1);
		add(t1);
		add(l2);
		add(t2);
		add(b1);
		add(b2);
	}
}
/*<applet Code=GridLayout width=250 height=150> </applet> */
		
		