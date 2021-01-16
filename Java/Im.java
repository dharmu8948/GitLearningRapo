import java.applet.*;
import java.awt.*;
public class Im extends Applet implements Runnable
{
	String str1,str2;
	Image img;
	Thread t;
	int a=10,b=100;
	public void init()
	{
		str1=getParameter("user");
		str2=getParameter("Course");
		img=getImage(F:\javaprogram\Image,"dfwefe.png");
		setFont(new Font("Arial Black",fontPLAIN,28));
	}
	public void start()
	{
		Thread t=new Thread(this);
		t.start();
	}
	public void run()
	{
		for(;;)
		{
			if(a>=1000)
			{
				a=-10;
				b=100;
			}
			try
			{
				t.sleep(60);
				a=a+3;
				b=b+5;
				repaint();
				b=b-5;
			}
			catch(Exception e)
			{
			}
		}
	}
	public void paint(Graphics g)
	{
		g.drawString(str1,400,20);
		g.drawString(str2,410,50);
		g.drawImage(img,a,b,250,200,this);
		if(b==115)
			b=100;
	}
}
/*  <applet code=Im width=1023 height=700>
	<param name="user balue="Sherwood Colege">
	<param name="course" value="MCA">
	</applet>  */