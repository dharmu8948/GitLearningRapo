//WAP TO CHECK A GIVEN NUMBER IS POLINDROME OR NOT
import java.io.*;
class Polindrome
{
int n,r,rev=0,x;
void Polindrome()throws IOException
{
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
System.out.println("Enter a number :");
n=Integer.parseInt(br.readLine());
}
void findPolindrome()throws IOException
{
	x=n;
while(n!=0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
//System.out.println("Reverse number is="+rev);
}
if(rev==x)
 System.out.println("Polindrome");
 else
  System.out.println("Not a Polindrome");
 }
 }
 class RunPolindrome
 {
 public static void main(String[] args)throws IOException
 {
 Polindrome P=new Polindrome();
 P.Polindrome();
 P.findPolindrome();
 }
 }