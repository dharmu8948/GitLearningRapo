//WAP to find the roots of thee quadratic equation
import java.io.*;
class Quadratic
{ 
  public static void main(String[] args)throws IOException
  {
    int a,b,c,d;
	double x1,x2;
	InputStreamReader ir=new InputStreamReader(System.in);
	BufferedReader br=new BufferedReader(ir);
	System.out.println("Enter the coefficient of quadratic Equation");
	a=Integer.parseInt(br.readLine());
	b=Integer.parseInt(br.readLine());
	c=Integer.parseInt(br.readLine());
	d=(b*b)-4*a*c;
	if(d>0)
	 {
	  x1=((-b)+Math.sqrt(d));
	  x2=((-b)-Math.sqrt(d));
	  System.out.println("Root1="+x1);
	  System.out.println("Root2="+x2);
	 }
	 else
	   if(d==0)
	   {
	     x1=-b/(2*a);
		 System.out.println("Roots are equal="+x1);
	   }
	   else
	     System.out.println("Roots are imaginary");
	}
 }