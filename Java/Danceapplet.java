import java.applet.*;
import java.awt.*;
public class Danceapplet extends Applet
{
/*  int a=0;
   Thread T;
public void start()
{  
T=new Thread(this);
T.start();
}
 public void run()
{
for(;;)
{
a=a+5;
repaint();
try
{
T.sleep(100);
}
catch(Exception e)
{
e.printStackTrace();
}
}
}     */
public void paint(Graphics g)
{
//g.setColor(Color.pink);
g.drawOval(150,50,90,90);
//g.setColor(Color.black);
g.drawLine(195,140,195,350);
g.drawLine(130,220,270,220);
g.drawLine(130,220,90,300);
g.drawLine(270,220,320,150);
g.drawLine(140,350,260,350);
//g.drawLine(140,350,180,420);
g.drawLine(140,350,140,420);
g.drawLine(260,350,260,420);
//g.drawLine(260,350,220,415);

}
}
//<applet code=Danceapplet width=500 height=700></applet>
