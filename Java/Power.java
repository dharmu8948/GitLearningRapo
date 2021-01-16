//WAP to find the power of a number without "Math.pow"
import java.io.*;
class Power
{ 
  public static void main(String[] args)throws IOException
  {
    int n,m,R=1,i;
	InputStreamReader ir=new InputStreamReader(System.in);
	BufferedReader br=new BufferedReader(ir);
	System.out.println("Enter the value of m,n");
	n=Integer.parseInt(br.readLine());
	m=Integer.parseInt(br.readLine());
	for(i=1;i<=n;i++)
	{
	R=R*m;
	}
	System.out.println("Result="+R);
	}
	}
	