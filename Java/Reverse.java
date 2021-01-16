//WAP to print reverse number of the given the number
import java.io.*;
class Reverse
{ 
  public static void main(String[] args)throws IOException
 {
   int num,rem,rev=0;
   InputStreamReader ir=new InputStreamReader(System.in);
   BufferedReader br=new BufferedReader(ir);
   System.out.println("Enter a number :");
   num=Integer.parseInt(br.readLine());
   while(num>0)
   {
     rem=num%10;
	 rev=rev*10+rem;
	 num=num/10;
   }
   System.out.println("Reverse number is="+rev);
  }
 }
  