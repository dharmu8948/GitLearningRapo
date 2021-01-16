//WAP input two numbers,find division if second numbeer is not equal to zero
import java.io.*;
class Division
{
  public static void main(String[] args)throws IOException
  {
    int a,b,D=0;
	InputStreamReader ir=new InputStreamReader(System.in);
	BufferedReader br=new BufferedReader(ir);
	System.out.println("Enter the value of a and b :");
	a=Integer.parseInt(br.readLine());
	b=Integer.parseInt(br.readLine());
	if(b!=0)
	{
	   D=a/b;
	}
	System.out.println("Division is="+D);
  }
}  