//WAP to input an array of element,display all element with sum and average
import java.io.*;
class SumAvg
{
	public static void main(String[] args)throws IOException
	{
		int ar[]=new int[10];
		int i,sum=0;
		double Avg;
		BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the element of array");
		for(i=0;i<10;i++)
		{
			ar[i]=Integer.parseInt(br.readLine());
		}
		System.out.println("Output");
        for(int value:ar)
        {
	       System.out.println(value);
	       sum=sum+value;
        }
        Avg=(double)sum/10;      //we use type caasting to convert integer value to double
		System.out.println("Sum is="+sum);
		System.out.println("Average is="+Avg);
	}
}