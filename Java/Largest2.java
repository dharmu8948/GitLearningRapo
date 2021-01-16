//WAP to input two numbers find largest between two number using ternary operator
import java.io.*;
class Largest2
{
  public static void main(String[] args)throws IOException
  {
    int a,b;
	InputStreamReader ir=new InputStreamReader(System.in);
	BufferedReader br=new BufferedReader(ir);
	System.out.println("Enter two number");
	a=Integer.parseInt(br.readLine());
    b=Integer.parseInt(br.readLine());
	int R=(a>b)?a:b;
	System.out.println("Largest number is="+R);
  }
 }