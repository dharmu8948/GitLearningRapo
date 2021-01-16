//wap for showing the exception in Exception Handling
class Exception3
{
	public static void main(String[] args)
	{
		int a,b,R;
		a=10;
		b=0;
		R=a+b;
		System.out.println("Addition="+R);
		try
		{
			R=a/b;
			System.out.println("Division="+R);
		}
		catch(ArithmeticException ae)
		{
			System.out.println("Can not divided by zero");
			args[1]="lko";
		}
		finally
		{
			R=a-b;
			System.out.println("Subtraction="+R);
			R=a*b;
			System.out.println("Multiplication="+R);
		}
		System.out.println("End of Program");
	}
}