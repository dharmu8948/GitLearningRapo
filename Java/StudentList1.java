//WAP TO IMPLEMENT OF EVENT HANDLING
import java.awt.*;
import java.awt.event.*;
class StudentList1 extends Frame implements ItemListener
{
	Label l1,l2,l3,l4,l5;
	TextField t1,t2,t3,t4;
	Button b1,b2;
	Choice rno;
	StudentList1()
	{
		l1=new Label("Roll number");
		l2=new Label("Name");
		l3=new Label("Course");
		l4=new Label("Semester");
		l5=new Label("Contact");
		t1=new TextField(10);
		t2=new TextField(10);
		t3=new TextField(10);
		t4=new TextField(10);
		b1=new Button("Submit");
		b2=new Button("Reset");
		rno=new Choice();
		rno.addItem("Select");
		rno.addItem("1001");
		rno.addItem("1002");
		rno.addItem("1003");
		setLayout(new FlowLayout());
		add(l1);
		add(rno);
		add(l2);
		add(t1);
		add(l3);
		add(t2);
		add(l4);
		add(t3);
		add(l5);
		add(t4);
		add(b1);
		add(b2);
		setSize(250,250);
		setVisible(true);
		rno.addItemListener(this);
	}
	public void ItemStateChange(ItemEvent ie)
	{
		String rn=(String)rno.getSelectedItem();
		if(rn.equals("1001"))
		{
			t1.setText("Dharmendra Kumar");
			t2.setText("MCA");
			t3.setText("3");
			t4.setText("8948778490");
		}
		else
		  if(rn.equals("1002"))
		  {
			t1.setText("Jitendra Kumar");
			t2.setText("B.Ed.");
			t3.setText("3");
			t4.setText("8115785617");
		  }
		else
		  if(rn.equals("1003"))
		  {
			t1.setText("Surendra Kumar");
			t2.setText("Polytechnic");
			t3.setText("1");
			t4.setText("8423836857");
		  }
	}
	public static void main(String[] args)
	{
		new StudentList1();
	}
}
		