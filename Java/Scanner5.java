//WAP to demonstration of Delimeter
import java.util.Scanner;
class Scanner5
{
	public static void main(String[] args)
	{
		String="aa bb,  bc,cd,57.7   efgh,aaa,bbb  cc,lko Ananlyze Infotech.99";
		Scanner.in=new Scanner(data);
		in.useDelimeter(" , * ");
		while(in.hasNext())
		{
			System.out.println(in.next());
		}
	}
}