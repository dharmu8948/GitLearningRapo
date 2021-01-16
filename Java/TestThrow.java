//WAP to demonstration(impliment) by throw keyword in the context of predefined exception
import java.util.Scanner;
class TestThrow
{
	public static void main(String[] args)
	{
		int a,b,R;
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter two numbers");
		a=scan.nextInt();
		b=scan.nextInt();
		try
		{
			if(b==0)
			{
				ArithmeticException ae=new ArithmeticException();
				throw ae;  //Explicitely called
			}
			else
			{
				R=a/b;
				System.out.println("Division="+R);
			}
		}
		catch(ArithmeticException ae)
		{
			System.out.println("can not divide by zero");
		}
		System.out.println("End of Program");
	}
}
		