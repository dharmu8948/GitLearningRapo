//wap for try with multiple catch
import java.io.*;
class Exception4
{
	public static void main(String[] args)
	{
		int a[]=new int[10];
		int i=0,n=0;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the Index of Element");
		try
		{
			i=Integer.parseInt(br.readLine());
			n=Integer.parseInt(br.readLine());
			a[i]=n/i;
		}
		catch(NumberFormatException ne)
		{
			System.out.println("Please Enter Integer value only");
		}
		catch(ArithmeticException ne)
		{
			System.out.println("Can not be divided by Zero");
			System.out.println(ne);
		}
		catch(Exception ne)
		{
			System.out.println("Error!!!!!!!!!!");
			System.out.println(ne);
		//	System.out.println(e);
		} 
		System.out.println("End of Program");
	}
}