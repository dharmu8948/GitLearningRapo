//wap to implements of adjustment event
import java.awt.event.*;
import java.awt.*;
public class scroll extends Frame implements AdjustmentListener
{
	Scrollbar s1,s2,s3;
	Label l1,l2,l3;
	public scroll()
	{
		super("Scrollbar");
		s1=new Scrollbar(Scrollbar.HORIZONTAL,1,1,0,255);
		s2=new Scrollbar(Scrollbar.HORIZONTAL,3,2,0,255);
		s3=new Scrollbar(Scrollbar.HORIZONTAL,1,1,0,255);
		setLayout(null);
		l1=new Label("RED");
		l2=new Label("GREEN");
		l3=new Label("BLUE");
		add(l1);
		add(s1);
		add(l2);
		add(s2);
		add(l3);
		add(s3);
		l1.setBounds(20,50,50,30);
		s1.setBounds(70,50,250,30);
		l2.setBounds(10,100,50,30);
		s2.setBounds(70,100,250,30);
		l3.setBounds(10,150,50,30);
		s3.setBounds(70,150,250,30);
		s1.addAdjustmentListener(this);
s2.addAdjustmentListener(this);
s3.addAdjustmentListener(this);
setSize(500,500);
setVisible(true);
}
public void adjustmentValueChanged(AdjustmentEvent ae)
{
int r,g,b;
r=s1.getValue();
g=s2.getValue();
b=s3.getValue();
Color c=new Color(r,g,b);
String s="Red: "+r+"Green: "+g+"Blue: "+b;
setTitle(s);
setBackground(c);
	//	setSize(500,300);
	//	setVisible(true);
	}
	
	public static void main(String[] args)
	{
		new scroll();
	}
}