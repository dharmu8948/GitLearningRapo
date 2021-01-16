//WAP TO PRINT ADDITION OF MATRIX
import java.io.*;
class AdditionMatrix
{
	public static void main(String[] args)throws IOException
	{
		int i,j;
		int a[][]=new int[4][4];
		int b[][]=new int[4][4];
		int c[][]=new int[4][4];
		BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter element of 1st matrix");
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				a[i][j]=Integer.parseInt(br.readLine());
			}
		}
		System.out.println("Enter element of 2st matrix");
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				b[i][j]=Integer.parseInt(br.readLine());
			}
		}
		System.out.println("Addition of Matrix");
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
				System.out.print(c[i][j]+"\t");
		//		System.out.println();
			}
           System.out.println();
			}
		}
	}
			