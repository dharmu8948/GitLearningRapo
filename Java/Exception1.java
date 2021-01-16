//program to demonstration of Exception with "try" with "finally"
class Exception1
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
		finally
		{
			R=a*b;
			System.out.println("Multiplication="+R);
			R=a-b;
			System.out.println("Subtraction="+R);
		}
		System.out.println("End of Program");
	}
}