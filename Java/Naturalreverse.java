//WAP to print n natural number in reverse order
import java.io.*;
class Naturalreverse
{
  public static void main(String[] args)throws IOException
  {
    int N,i;
	InputStreamReader ir=new InputStreamReader(System.in);
	BufferedReader br=new BufferedReader(ir);
	System.out.println("Enter N natural number");
	N=Integer.parseInt(br.readLine());
    System.out.println("Reverse number is :");
	for(i=N;i>=1;i--)
	 System.out.println("\t"+i);
	}
}