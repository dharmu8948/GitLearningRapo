//WAP TO INPUT ONLY INTEGER VALUE IF YOU ENTER NON INTEGER THEN HE WILL INFORM YOU THAT "eNTER A NUMBER"
import java.util.Scanner;
class IntegerScanner
{
	public static void main(String[] args)
	{
		int ar[]=new int[10];
		int i=0,sum=0;
		Scanner in=new Scanner(System.in);
		System.out.println("Enter 10 numbers");
		while(in.hasNext())
		{
			if(in.hasNextInt())
			{
				ar[i++]=in.nextInt();
			}
			else
			{
				System.out.println("Please enter Integer value only");
			    in.next();
			}
			if(i==10)
			   break;
		}
		System.out.println("Output");
		for(i=0;i<10;i++)
		{
		//	System.out.println("ar[i]");
			sum=sum+ar[i];
		}
		System.out.println("Sum="+sum);
		System.out.println("Average="+sum/10.0);
	}
}
		