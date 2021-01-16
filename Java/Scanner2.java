//  WAP TO CREATE STRING OBJECT THAT CONTAIN INTEGER,FLOAT DOUBLE CHARACTER VALUE NOW FILTER ALL INTEGER AND DISPLAY WITH SUM AND AVERAGE
import java.util.Scanner;
class Scanner2
{
	public static void main(String[] args)
	{
		String data="10 20 dse 30 40 50 ab 60 70 80 bc F4 J9 9  7.5 100";
		int sum=0,value;
	//	double avg;
		Scanner in=new Scanner(data);
		while(in.hasNext())
		{
			if(in.hasNextInt())
			{
				value= in.nextInt();
				System.out.println(value);
				sum=sum+value;
			}
			else
			{
				in.next();
			}
		}
		System.out.println("Sum="+sum);
	//	System.out.println("Average="+sum/String.length);
	}
}