//WAP to count the digit of a number
import java.io.*;
class Countdigit
{
  public static void main(String[] args)throws IOException
  {
    int num,rem,count=0;
	InputStreamReader ir=new InputStreamReader(System.in);
	BufferedReader br=new BufferedReader(ir);
	System.out.println("Enter a number :");
	num=Integer.parseInt(br.readLine());
	while(num>0)
	{
	  rem=num%10;
	  num/=10;
	  count++;
	}
	System.out.println("Number of digit="+count);
  }
 }