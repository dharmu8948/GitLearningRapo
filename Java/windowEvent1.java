import java.awt.*;
import java.awt.event.*;
class windowEvent1 extends Frame implements WindowListener
{
Dialog d;
Label l;
Button B1,B2;
windowEvent1()
{
setSize(1024,768);
setBackground(Color.green);
setVisible(true);
addWindowListener(this);
d=new Dialog(this,"Confermation");    //frame name
l=new Label("Do you want to Exit(yes/No)");
B1=new Button("Yes");
B2=new Button("NO");
d.setLayout(null);
d.add(l);
d.add(B1);
d.add(B2);
l.setBounds(20,50,150,20);
B1.setBounds(50,100,50,20);
B2.setBounds(120,100,50,20);
d.setSize(220,150);
d.setLocation(400,300);
B1.addActionListener(new buttonevent());
B2.addActionListener(new buttonevent());
}
public void windowOpened(WindowEvent we)
{
}
public void windowClosing(WindowEvent we)
{
d.setVisible(true);
}
public void windowClosed(WindowEvent we)
{
}
public void windowIconified(WindowEvent we)
{
}
public void windowDeiconified(WindowEvent we)
{
}
public void windowActivated(WindowEvent we)
{
}
public void windowDeactivated(WindowEvent we)
{
}
class buttonevent implements ActionListener     //inner class
{
public void actionPerformed(ActionEvent ae)
{
if(ae.getSource()==B1)
{
System.exit(0);
}
else if(ae.getSource()==B2)
{
d.setVisible(false);
}
}
}
public static void main(String[] args)
{
new windowEvent1();
}
}
