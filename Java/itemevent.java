import java.awt.*;
import java.awt.event.*;
class itemevent extends frame implements ItemListener
{
Checkbox c1,c2,c3,c4,c5;
CheckboxGroup c;
Label l1,l2;
Dialog d;
itemevent()
{
setTitle("ItemEventTest");
Font f=new Font("Times New Roman",Font BOLD,20);
setFont(f);
c=new CheckboxGroup();
c1=new Checkbox("BCA");
c2=new Checkbox("MCA");
c3=new Checkbox("M.Tech.");
c4=new Checkbox("B.Tech.");
c5=new Checkbox("Male",c,true);
c6=new Checkbox("Female",c,false);
c1.addListener(this);
c2.addListener(this);
c3.addListener(this);
c4.addListener(this);
c5.addListener(this);
c6.addListener(this);
setLayout(new FlowLayout());
add(c1);
add(c2);
add(c3);
add(c4);
add(c5);
add(c6);
l1=new Label();
l2=new Label();
add(1);
setSize(300,300);
setVisible(true);
d=new Dialog(this,"Course Detail");
}
public void itemStateChange(ItemEvent ie)
{
Checkbox cc=(Checkbox)ie.get.ItemSelectable();
String S="";
if(cc.getStart()==true))
S="You Have Selected"+cc.getLabel();
else
S="You Have Deselected"+cc.getLabel();
l1.setText(S);
l2.setText(S);
Font f1=new Font("Time New Roman",Font,BOLD,15);
d.setFont(f1);
d.add(l2);
d.setSize(300,150);
setVisible(true);
}
public static void main(String[] args)
{
new itemevent();
}
}