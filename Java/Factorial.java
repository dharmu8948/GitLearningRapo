//WAP to find factorial of a number
import java.io.*;
;
class Factorial
{
  public static void main(String[] args)throws IOException
  {
    int n,i,fact=1;
	InputStreamReader ir=new InputStreamReader(System.in);
	BufferedReader br=new BufferedReader(ir);
	System.out.println("Enter a number");
	n=Integer.parseInt(br.readLine());
	if(n>0)
	  {
	    for(i=n;i>=1;i--)
		{
		 fact=fact*i;
		}
	  }
	  System.out.println("Factorial is="+fact);
	 }
 }