//WAP A PROGRAM TO CREATE AN ARRAY OF TWO DIMENSION AND PRINT IDENTITY MATRIX
import java.io.*;
class IdentityMatrix
{
	public static void main(String[] args)throws IOException
	{
		int i,j;
		int a[][]=new int[4][4];
	//	int I[][]=new int[4][4];
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter 16 element of matrix");
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				a[i][j]=Integer.parseInt(br.readLine());
			}
		}
        System.out.println("Identity Matrix is:");
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				if(i==j)
					System.out.print("\t"+1);
				else if(i!=j)
					System.out.print("\t"+0);
			//	System.out.print(a[i][j]);
			}
			System.out.println();	
		}
	/*	for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				System.out.print("\t"+I[i][j]);
			}
			System.out.println();
		}*/
	}
}