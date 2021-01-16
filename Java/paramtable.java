//WAP TO PASS THE NUMBER AND TERMS AND PRINTS THE TABLE
import java.awt.*;
import java.applet.*;
public class paramtable extends Applet
{
	int n,m,t,i;
	public void init()
	{
		n=Integer.parseInt(getParameter("element"));  //getPararmeter() is method of Applet class
		m=Integer.parseInt(getParameter("term"));
	}
	public void paint(Graphics g)
	{
		int a=20;
		for(i=1;i<=m;i++)
		{
			t=n*i;
			g.drawString(n+"."+i+"="+t,50,a);
			System.out.println(t);
			a=a+15;
		}
	}
}
/* <applet Code=Paramtable width 200 height=350 >
	<param name="element" value="13"> </param>
	<param name="term" value="15"> </param>
	</applet>
	*/