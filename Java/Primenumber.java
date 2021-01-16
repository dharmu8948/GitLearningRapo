//WAP TO CHECK A GIVEN NUMBER IS PRIME OR NOT
import java.io.*;
class Primenumber
{
  public static void main(String[] args)throws IOException
  {
    int num,i;
	InputStreamReader ir=new InputStreamReader(System.in);
	BufferedReader br=new BufferedReader(ir);
	System.out.println("Enter a number :");
	num=Integer.parseInt(br.readLine());
	for(i=2;i<num;i++)
	{
	  if(num%i==0)
	   break;
	}
	if(num==i)
	  System.out.println("Prime number="+num);
	else
	  System.out.println("Not a prime number is="+num);
   }
  }