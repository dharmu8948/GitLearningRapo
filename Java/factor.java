/*
import java.io.*;
class factor
{
	public static void main(String[] args)throws IOException
	{
int n,i;
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
System.out.println("Enter a number");
n=Integer.parseInt(br.readLine());
for(i=1;i<=n;i++)
{
if(n%i==0)
System.out.println("Factor is="+i);
}
}
}
===================================================================================================================================
import java.io.*;
class sumfactor
{
  public static void main(String[] args)throws IOException
   {
  int n,i,sum=0;
  BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
  System.out.println("Enter a number");
  n=Integer.parseInt(br.readLine());
  for(i=1;i<=n;i++)
  {
	  if(n%i==0)
	  {
		  sum=sum+i;
	  }
  }
	  System.out.println("Sum of the Factor is="+sum);
	  }
	  }
============================================================================================================================================
import java.io.*;
class Evenfactor
{
	public static void main(String[] args)throws IOException
	{
int n,i;
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
System.out.println("Enter a number");
n=Integer.parseInt(br.readLine());
System.out.println("Even Factor is");
for(i=2;i<=n;i+=2)
{
	if(n%i==0)
	{
		System.out.print(i);
	    System.out.println();
	}
	}
	}
	}
=========================================================================================================================================*/
import java.io.*;
class EvenSumfactor
{
	public static void main(String[] args)throws IOException
	{
int n,i,sum=0;
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
System.out.println("Enter a number");
n=Integer.parseInt(br.readLine());
for(i=2;i<=n;i+=2)
{
	if(n%i==0)
	{
		sum=sum+i;
	}
}
	System.out.println("Even factor is="+sum);
	}
	}
