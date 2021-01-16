//WAP to check the given number is even or odd
import java.io.*;
class oddeven
{
 public static void main(String[] args)throws IOException
 { 
   int a;
   InputStreamReader ir=new InputStreamReader(System.in);
   BufferedReader br=new BufferedReader(ir);
   System.out.println("Enter a number :");
   a=Integer.parseInt(br.readLine());
   if(a%2==0)
     System.out.println("Even Number :"+a);
   else
     System.out.println("Odd Number :"+a);
  }
 }