//program to create a graph
import java.awt.*;
import java.applet.*;
public class Graphapplet extends Applet
{
public void paint(Graphics g)
{
int a=10;
int x[]={50,100,200,350,480};
int y[]={450,400,300,250,250};
g.drawLine(50,0,50,450);
g.drawLine(50,450,500,450);
g.setColor(Color.blue);

g.drawPolyline(x,y,5);
g.setColor(Color.black);
for(int i=400;i>=0;i-=50)
{
g.drawLine(48,i,52,i);
//g.drawStringvalueOf(a,20,i);
a=a+10;
}
for(int i=100;i<=500;i+=50)
g.drawLine(i,447,i,453);
}
}
//<applet code=Graphapplet width=500 height=500></applet>
