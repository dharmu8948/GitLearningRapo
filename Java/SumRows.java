//WAP to input a matrix of 4*4 order and find sum of all rows
import java.io.*;
class SumRows
{
	public static void main(String[] args)throws IOException
	{
		int i,j,sum=0;
		int a[][]=new int[4][4];
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the element of Matrix");
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				a[i][j]=Integer.parseInt(br.readLine());
			}
		}
		System.out.println("Addition of Rows");
		for(i=0;i<4;i++)
		{
			sum=0;
			for(j=0;j<4;j++)
			{
				sum=sum+a[i][j];
			}
			System.out.println("Sum of Rows (i+1)="+sum);
		}
	}
}
		
				