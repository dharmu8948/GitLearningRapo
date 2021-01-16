import java.io.*;
class Power
{
public static void main(String[] args)throws IOException
{
int m,n,R=1,i;
BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
System.out.println("Enter the value of m,n");
m=Integer.parseInt(br.readLine());
n=Integer.parseInt(br.readLine());
for(i=1;i<=n;i++)
{
R=R*m;
}
System.out.println("Result="+R);
}
}