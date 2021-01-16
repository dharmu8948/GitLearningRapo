//WAP TO INPUT TWO ARRAY OF 10 ELEMENT AND MERGE IN ONE ARRAY WITH  THE ANOTHER ARRAY OF 20 ELEMENT
import java.io.*;
class MergeArray
{
	public static void main(String[] args)throws IOException
	{
		int a[]=new int[10];
		int b[]=new int[10];
		int c[]=new int[20];
		int i,j;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the element of 1st array");
		for(i=0;i<10;i++)
			a[i]=Integer.parseInt(br.readLine());
		System.out.println("Enter the element of 2nd array");
		for(i=0;i<10;i++)
			b[i]=Integer.parseInt(br.readLine());
		for(i=0;i<10;i++)
			c[i]=a[i];
		for(j=0;j<10;j++)
			c[i+j]=b[j];
       System.out.println("Merged Array is:");
	   for(i=0;i<20;i++)
		   System.out.println(c[i]);
	}
}