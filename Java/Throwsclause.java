//WAP TO DEMONSTRATION OF THROWS CLAUSE
import java.io.*;
class Calculation
{
	public static void main(String[] args)throws IOException,ArithmeticException
	{
		int a,b,R;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter two number");
		a=Integer.parseInt(br.readLine());
		b=Integer.parseInt(br.readLine());
		R=a/b;
		System.out.println("Division="+R);
	}
}