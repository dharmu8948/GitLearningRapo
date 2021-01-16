//WAP to print a series
import java.io.*;
class Series2
{
public static void main(String[] args)throws IOException
{
int n,i,j,f;
double sum=0.0;
InputStreamReader ir=new InputStreamReader(System.in);
BufferedReader br=new BufferedReader(ir);
System.out.println("Enter the number of terms :");
n=Integer.parseInt(br.readLine());
for(i=1;i<=n;i++)
{
f=1;
for(j=1;j<=i;j++)
{
f=f*j;
}
sum=sum+((Math.pow(i,i))/f);
}
System.out.println("sum of series is="+sum);
}
}
