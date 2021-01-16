//WAP FOR FOR EXCEPTION HANDLING USING SOME METHODS OF EXCEPTION HANDLING
class Exception2
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
			System.out.println("Method1: Can not divide by Zero");  //user define Exception Message
			System.out.println("Method2:"+ae.getMessage());  //it print Exception Message
			System.out.println("Method3:"+ae);  //it print "which type of exception get"
			System.out.println("Method4:");    //it also print total line of exception type
			ae.printStackTrace(); //it print Exception class,Exception Message,Line number
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