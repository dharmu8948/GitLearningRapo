//program to demonstration of actionListener interface
import java.awt.*;
import java.applet.*;
import java.awt.event.*;
public class ArithCal extends Applet implements ActionListener
{
Label l1,l2,l3;
TextField t1,t2,t3;
Button b1,b2,b3,b4;
public void init()
{
l1=new Label("Enter value1");
l2=new Label("Enter value2");
l3=new Label("Calculation");
t1=new TextField(15);
t2=new TextField(15);
t3=new TextField(15);
b1=new Button("Addition");
b2=new Button("Subtraction");
b3=new Button("Multiplication");
b4=new Button("Division");
add(l1);
add(t1);
add(l2);
add(t2);
add(l3);
add(t3);
add(b1);
add(b2);
add(b3);
add(b4);
b1.addActionListener(this);
b2.addActionListener(this);
b3.addActionListener(this);
b4.addActionListener(this);
setBackground(Color.cyan);
}
public void actionPerformed(ActionEvent ae)
{
double a,b,R;
a=Double.parseDouble(t1.getText());
b=Double.parseDouble(t1.getText());
if(ae.getSource()==b1)
{
R=a+b;
t3.setText(String.valueOf(R));
l3.setText("Addition");
}
if(ae.getSource()==b2)
{
R=a-b;
t3.setText(String.valueOf(R));
l3.setText("Subtraction");
}
if(ae.getSource()==b3)
{
R=a*b;
t3.setText(String.valueOf(R));
l3.setText("Multiplication");
}
if(ae.getSource()==b4)
{
R=a/b;
t3.setText(String.valueOf(R));
l3.setText("Division");
}
}
}
// <applet code=ArithCal width=300 height=200></applet>