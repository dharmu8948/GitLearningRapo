import java.util.*;
class FloatingEvenOdd
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		float a= sc.nextFloat();
		int b;
		b=(int)a;
		if(( b % 2)==1)
		System.out.println("even");
		else
		System.out.println("odd");
	}
}