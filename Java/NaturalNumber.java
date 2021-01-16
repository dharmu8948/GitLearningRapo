//WAP to print n natural number
import java.io.*;
class Naturalnumber
{
  public static void main(String[] args)throws IOException
  {
    int N,i;
	InputStreamReader ir=new InputStreamReader(System.in);
	BufferedReader br=new BufferedReader(ir);
	System.out.println("Emter N natural number");
	N=Integer.parseInt(br.readLine());
	for(i=1;i<=N;i++)
		System.out.println("\t"+i);
   }
 }