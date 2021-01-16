import java.util.*;
class Digitalclock extends Thread
{
	int h,m,s;
	String hh,mm,ss,time;
	public void run()
	{
		for(;;)    //infinite loop
		{
			Calendar C =Calendar.getInstance();
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
			System.out.println("Time\t"+time);
			try
			{
				System.out.println("\r");
				sleep(1000); //1 sec.
			}
			catch(InterruptedException ie)
			{
			}
		}	
    }
	public static void main(String[] args)
	{
		new Digitalclock().start();
	}
}
			