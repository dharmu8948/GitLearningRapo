//implementation of applet for graphics of Graph
import java.awt.*;
import java.applet.*;
public class Graph extends Applet implements Runnable
{
	Thread T;
	int x=0;
	public void init()
	{
		setBackground(Color.white);
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
				T.sleep(100);
				x=x+10;
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
		int i;
		intj;
		int x[800];
		int y[800];
		for(i=0;i<700;i++)
			g.drawPolyline(int x[i],int y[i],int 8);
		for(j=-2;j<700;j++)
			g.drawPolyline(int x[j],int y[j],int 8);
	/*	for(x=0&&y=0;x<700&&y<700;x+=10&&y+=10)
			g.drawLine(int a[x][y],int b[x][y],int 8,8);
		for(x=0&&y=0;x<=30&&y<=20;x++,y++)
			g.drawPolyline(int a[x][y],int b[x][y],int 2);
		for(x=30,y=20;y<=50;y++)
			g.drawPolyline(int a[y],int b[y],int 2);
		for(x=30&&y=50;x<=20&&y<40;x--,y++)
			g.drawPolyline(int [x][y],int b[x][y],int 2);   */
	}
}
/*  <Applet Code=Graph height=700 width=700
	</applet> */
	
		