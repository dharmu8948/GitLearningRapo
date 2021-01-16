//WAP to input an array of an element and print it into reverse order
import java.io.*;
class ReverseArray
{
	public static void main(String[] args)throws IOException
	{
		int i,temp,j;
		int ar[]=new int[10];
		BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the array of ten element");
		for(i=0;i<10;i++)
		{
			ar[i]=Integer.parseInt(br.readLine());
		}
		j=9; //we can also write as "j=ar.length"
		for(i=0;i<5;i++)   //or for(i=0;i<ar.length/2;i++)
		{
			temp=ar[i];
			ar[i]=ar[j];
			ar[j]=temp;
			j--;
		}
        System.out.println("Reverse Number:");
        for(int value : ar)
		{
			System.out.println(value);
		}
	}
}
		
		
		