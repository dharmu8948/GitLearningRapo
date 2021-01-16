//WAP to print 1 to n Natural number Series and make the difference and of 1 second between printing of two element
import java.lang.*;
class NaturalSleep1 extends Thread
{
	int i,n,T;
	public void run()
	{
		n=20;
		for(i=0;i<=n;i++)
		{
			System.out.println(i);
		try
		{
			sleep(1000);                      //1000 milisecond=1 second
			System.out.print("\r");
		}                                   
		catch(InterruptedException ie)
		{
		//	System.out.println(ie);
		}
		}
	}
public static void main(String[] args)throws InterruptedException
{
	new NaturalSleep1().start();
}
}
			