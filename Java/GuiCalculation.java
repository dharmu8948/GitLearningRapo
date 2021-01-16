//program to demonstration of event handling
import java.awt.*;
import java.awt.event.*;
class GuiCalculation extends Frame implements ActionListener
{
	Label l1,l2,l3;
	TextField t1,t2,t3;
	Button B1,B2,B3,B4;
	GuiCalculation()
	{
		setBackground(Color.black);
		l1=new Label("Value1");
		l2=new Label("Value2");
		l3=new Label("Value3");
		t1=new TextField();
		t2=new TextField();
		t3=new TextField();
		t3.setEditable(false);
		B1=new Button("Addition");
		B1=new Button("Subtraction");
		B1=new Button("Multiplication");
		B1=new Button("Division");
		setLayout(null);
		add(l1);
		add(l2);
		add(l3);
		add(t1);
		add(t2);
		add(t3);
		add(B1);
		add(B2);
		add(B3);
		add(B4);
		l1.setBounds(20,50,70,30);
		t1.setBounds(140,50,70,30);
		l2.setBounds(20,100,70,30);
		t2.setBounds(140,100,70,30);
		l3.setBounds(20,150,70,30);
		t3.setBounds(140,150,70,30);
		B1.setBounds(20,200,70,30);
		B2.setBounds(140,200,70,30);
		B3.setBounds(20,250,70,30);
		B4.setBounds(140,250,70,30);
		setSize(250,300);
		setVisible(true);
		B1.addActionListener(this);
		B2.addActionListener(this);
		B3.addActionListener(this);
		B4.addActionListener(this);
	}
	public void actionPerformed(ActionEvent ae)
	{
		double a,b,res;
		a=Double.parseDouble(t1.getText());
		b=Double.parseDouble(t1.getText());
		if(ae.getSourse()==B1)
		{
			res=a+b;
			t3.setText(String.valueOf(res));
			l3.setText("Addition");
		}
		else
			if(ae.getSourse()==B2)
		{
			res=a-b;
			t3.setText(String.valueOf(res));
			l3.setText("Subtraction");
		}
		else
			if(ae.getSourse()==B3)
		{
			res=a*b;
			t3.setText(String.valueOf(res));
			l3.setText("Multiplication");
		}
		else
			if(ae.getSourse()==B4)
		{
			res=a/b;
			t3.setText(String.valueOf(res));
			l3.setText("Division");
		}	
	}
	public static void main(String[] args)
	{
		new GuiCalculation();
	}
}
			
			
			