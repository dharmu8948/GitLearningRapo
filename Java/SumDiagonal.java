//WAP TO FIND SUM OF LEFT AND RIGHT DIAGONAL OF A MATRIX
import java.io.*;
class SumDiagonal
{
	public static void main(String[] args)throws IOException
	{
		int i,j,Lsum=0,Rsum=0;
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
		System.out.println("Addition of Matrix");
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				if(i==j)
					Lsum=Lsum+a[i][j];
				else if((i+j)==3)				//or if(i+j==ar.length-1
				     Rsum=Rsum+a[i][j];
			}
		}
		System.out.println("Sum of Left diagonal is="+Lsum);
		System.out.println("Sum of Right Diagonal is="+Rsum);
	}
}