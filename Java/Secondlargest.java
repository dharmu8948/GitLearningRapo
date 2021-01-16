//WAP to inputthe number and find second largest number
import java.io.*;
class Secondlargest
{
  public static void main(String[] args)throws IOException
  {
   int a,b,c;
   InputStreamReader ir=new InputStreamReader(System.in);
   BufferedReader br=new BufferedReader(ir);
   System.out.println("Enter Three Number :");
   a=Integer.parseInt(br.readLine());
   b=Integer.parseInt(br.readLine());
   c=Integer.parseInt(br.readLine());
   if(a>b&&a>c)
    {
	 if(b>c)
	   System.out.println("Second Largest number="+b);
	 else
	   System.out.println("Second largest number="+c);
	}
   else if(b>c)
     { 
	  if(a>c)
	  System.out.println("Second Largest number="+a);
    else 
      System.out.println("Second Largest number="+c);
     }
    else
       {
         if(a>b)
          System.out.println("Second Largest number="+a);
        else
          System.out.println("Second Largest number="+b);
      }
   }
 } 
	  