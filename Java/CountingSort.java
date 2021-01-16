import java.io.*;
class Counting
{
public static void main(String[] args)throws IOException
{
   int a[]=new int[50];
   int n,i,j;
   BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
   System.out.println("Enter the Number of array :");
   n=Integer.parseInt(br.readLine());
   System.out.println("Enter the element of the Array :"); 
   for(i=0;i<n;i++)
   {
   a[i]=Integer.parseInt(br.readLine());
   }
}
}
   