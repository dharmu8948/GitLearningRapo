import java.applet.Applet;
import java.awt.*;
public class Myapplet2 extends Applet
{
	public void init()
	{
		Color c=new Color(150,150,200);
		Font f=new Font ("Viner ITC",Font.BOLD+Font.ITALIC,30);
		setBackground(c);
		setForeground(Color.white);
		setFont(f);
	}
	public void paint(Graphics g)
	{
		g.drawString("Welcome to applet programming...",20,100);
	}
}
//<Applet code=MyApplet2 width=600 height=200>
//</applet>
