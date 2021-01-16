//WAP to find Largest number between three number using ternary operator
import java.io.*;
class Largest3
{
  public static void main(String[] args)throws IOException
  { 
   int a,b,c;
   InputStreamReader ir=new InputStreamReader(System.in);
   BufferedReader br=new BufferedReader(ir);
   System.out.println("Enter three number");
   a=Integer.parseInt(br.readLine());
   b=Integer.parseInt(br.readLine());
   c=Integer.parseInt(br.readLine());
   int G=(a>b)?((a>c)?a:c):((b>c)?b:c);
   System.out.println("Largest number is="+G);
  }
 } 
   
   