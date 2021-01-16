//implementation of applet for graphics of road status
import java.applet.*;
import java.awt.*;
public class RoadStatus extends Applet implements Runnable
{
	int a=0;
	Thread T;
	public void start()
	{
		//setBackground(Color.green);
		T=new Thread(this);
		T.start();
	}
	public void run()
	{
		for( ; ; )
		{
			a=a+3;
			repaint();
			if(a>=950)
				a=0;
			try
			{
				T.sleep(100);
			}
			catch(Exception e)
			{
				e.printStackTrace();
			}
		}
	}
	public void paint(Graphics g)
	{
		int i,x1=0,x2=500,y1=0,y2=400;
		g.setColor(Color.gray);
		g.fillRect(0,200,1000,200);
		g.setColor(Color.gray);
		g.fillRect(400,0,200,600);
		for(i=50;i<=1000;i+=30)
		{
			g.setColor(Color.white);
			g.drawLine(x1,300,i,300);
			x1=i+20;
		}
		for(i=50;i<=200;i+=30)
		{
			g.setColor(Color.white);
			g.drawLine(500,y1,500,i);
			y1=i+20;
		}
		for(i=420;i<=800;i+=30)
		{
			g.setColor(Color.white);
			g.drawLine(500,y2,500,i);
			y2=i+20;
		}
	    g.setColor(Color.green);
		g.fillRect(900-a,280,100,40);
		g.setColor(Color.red);
		g.fillRect(0+a,220,100,40);
		g.setColor(Color.yellow);
		g.fillRect(480,500-a,40,100);
		g.setColor(Color.blue);
		g.fillRect(420,0+a,40,100);
	}   
}

 /*<Applet Code="RoadStatus" height=1200 width=1200
	</applet> */
			