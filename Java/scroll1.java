//wap to create three scrollbar of color red blue and green
import java.awt.event.*;
import java.awt.*;
public class scroll1 extends Frame implements AdjustmentListener
{
Scrollbar s1,s2,s3;
Label l1,l2,l3;
public scroll1()
{
super("Scrollbar");
s1=new Scrollbar(Scrollbar.HORIZONTAL,0,1,0,255);
s2=new Scrollbar(Scrollbar.HORIZONTAL,10,2,0,255);
s3=new Scrollbar(Scrollbar.HORIZONTAL,5,1,0,255);
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
l1.setBound(20,50,50,30);
s1.setBound(70,50,250,30);
l2.setBound(10,100,50,30);
s2.setBound(70,100,250,30);
l3.setBound(10,150,50,30);
s3.setBound(70,150,250,30);
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
}
public static void main(String[] args)
{
new scroll1();
}
}