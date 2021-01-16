import java.awt.*;
import java.awt.event.*;
class windowAdapterDemo extends Frame implements ActionListener
{
Dialog D;
Label l;
Button B1,B2;
windowAdapterDemo()
{
D=new Dialog(this,"Confermation");
l=new Label("Do you want to Exit(Yes/No)");
B1=new Button("Yes");
B2=new Button("No");
D.setLayout(new FlowLayout());
D.add(l);
D.add(B1);
D.add(B2);
addWindowListener(new WindowAdapter()
{
public void windowClosing(WindowEvent we)
{
D.setSize(200,100);
D.setVisible(true);
}
});
B1.addActionListener(this);
B2.addActionListener(this);
setVisible(true);
setSize(500,400);
}
public void actionPerformed(ActionEvent ae)
{
if(ae.getSource()==B1)
{
System.exit(0);
}
else
{
D.setVisible(false);
}
}
public static void main(String[] args)
{
new windowAdapterDemo();
}
} 