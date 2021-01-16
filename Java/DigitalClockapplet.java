//wap to create Digital clock using Applet
import java.applet.Applet;
import java.awt.*;
import java.util.Calendar;
public class DigitalClockapplet extends Applet implements Runnable
{
	int h,m,s;
	String hh,mm,ss;
	String time="";
	Thread T;
	public void init()
	{
		setBackground(Color.red);
		setForeground(Color.white);
		setFont(new Font("Arial Black",Font.BOLD,22));
	}	  
	  public void start()
		{
			T=new Thread(this);
			T.start();
		}   
		public void run()
		{
        for( ; ; )
		{
			Calendar C=Calendar.getInstance();
			h=C.get(Calendar.HOUR);
			m=C.get(Calendar.MINUTE);
			s=C.get(Calendar.SECOND);
			if(h<10)
				hh="0"+h;
			else
				hh=""+h;
			if(m<10)
				mm="0"+m;
			else
				mm=""+m;
			if(s<10)
				ss="0"+s;
			else
				ss=""+s;
			time=hh+":"+mm+":"+ss;
			try
			{
				repaint();
				T.sleep(1000);
			}
			catch(Exception e)
			{
			}
		}
		
	}
	public void paint(Graphics g)
	{
		g.drawString(time,20,100);
	}
}
/*<Applet code="DigitalClockapplet" width=200 height=200>
	</Applet>*/
				