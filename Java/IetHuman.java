//WAP TO CREATE AND MOVING A HUMAN FACE
import java.awt.*;
import java.applet.*;
public class IetHuman extends Applet implements Runnable
{
	Thread T;
	int x=0;
	public void init()
	{
		setBackground(Color.green);
		T=new Thread(this);
		T.start();
	}
	public void run()
	{
		for( ; ; )
		{
			repaint();
			try
			{
				T.sleep(10);
				x=x+3;
				if(x>1200)
					x=0;
			}
			catch(Exception e)
			{
			}
		}
	}
	public void paint(Graphics g)
	{
		g.setColor(Color.pink);
		g.fillOval(50+x,50,100,100);
		g.setColor(Color.white);
		g.fillOval(70+x,80,20,10);
		g.fillOval(110+x,80,20,10);
		g.setColor(Color.black);
		g.fillOval(76+x,82,8,6);
		g.fillOval(116+x,82,8,6);
		g.drawLine(95+x,85,95+x,115);
		g.drawLine(100+x,85,100+x,115);
		g.drawLine(105+x,85,105+x,115);
		g.fillArc(80+x,115,40,20,180,180);
	}
}
/*<Applet code=IetHuman width=1280 height=500>
	</Applet>*/
			
			