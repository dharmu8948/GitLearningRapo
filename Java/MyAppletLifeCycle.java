import java.applet.Applet;
import java.awt.*;
public class MyAppletLifeCycle extends Applet
{
String msg;
public void init()
{
Color c =new Color(150,150,200);
Font f=new Font("Viner Hand ITC",Font.BOLD+Font.ITALIC,30);
setBackground(c);
setForeground(Color.white);
setFont(f);
msg="init()-->";
System.out.println("Applet is initialized..");
}
public void start()
{
msg=msg+"start-->";
System.out.println("Applet is Starting");
}
public void stop()
{
msg=msg+"stop()-->";
System.out.println("Applet is Stopped");
}
public void destroy()
{
msg=msg+"destroy()";
System.out.println("Applet is destroyed");
System.out.println("msg\t"+msg);
}
public void paint(Graphics g)
{
g.drawString(msg,20,100);
System.out.println("paint() method");
}
}
//<Applet code=MyAppletLifeCycle width=600 height=200>
//</applet>