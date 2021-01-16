//WAP to generate a table of any number
import java.awt.*;
import java.awt.event.*;
class generatetable extends Frame implements ActionListener
{
	Label l1,l2;
	TextField t1,t2;
	Button b1;
	List l;
	double t;
	generatetable()
	{
		setBackground(Color.green);
		l1=new Label("Enter value");
		l2=new Label("Enter term");
		t1=new TextField(55);
		t2=new TextField(55);
		b1=new Button("Print table");
		l=new List();
		setLayout(null);
		add(l1);
		add(t1);
		add(l2);
		add(t2);
		add(b1);
		add(l);
		l1.setBounds(20,50,70,30);
		t1.setBounds(140,50,70,30);
		l2.setBounds(20,100,70,30);
		t2.setBounds(140,100,70,30);
		b1.setBounds(140,150,70,30);
		l.setBounds(100,200,70,150);
		setSize(700,500);
		setVisible(true);
		b1.addActionListener(this);
	}
	public void actionPerformed(ActionEvent ae)
	{
		l.removeAll();
		Double a,b,t;
		a=Double.parseDouble(t1.getText());
		b=Double.parseDouble(t1.getText());
		for(int i=1;i<=b;i++)
		{
			t=a*i;
			l.add(""+t);
		}
	}  
	public static void main(String[] args)
	{
		new generatetable();
	}
}
		