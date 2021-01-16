//WAP to calculate sum of even and odd number of given +ve and -ve number
import java.io.*;
class SumArray
{
	public static void main(String[] args)throws IOException
	{
		int ar[] = new int[18];
		int pso=0,pse=0,nso=0,nse=0,i;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter 18 element of array");
		for(i=0;i<18;i++)
		{
			ar[i]= Integer.parseInt(br.readLine());
		}
		for(i=0;i<18;i++)
		{
			if(ar[i]>0)
			{
				if(ar[i]%2==0)
				{
					pse=pse+ar[i];
				}
				else
					pso=pso+ar[i];
			}
			else
			{
				if(ar[i]%2==0)
					nse=nse+ar[i];
				else
					nso=nso+ar[i];
			}
		}
		System.out.println("Sum of even +ve Number="+pse);
		System.out.println("Sum of odd +ve Number="+pso);
		System.out.println("Sum of even -ve Number="+nse);
		System.out.println("Sum of odd -ve Number="+nso);
	}
}