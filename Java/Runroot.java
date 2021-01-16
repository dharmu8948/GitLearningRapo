//WAP to compute roots of quadratic equation the value of coefficient(a,b,c) are entered from keyboard class and object
import java.io.*;
//import java.util.*;
class Root
{
int a,b,c,d;
double R1,R2;
void input()throws IOException
{
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
System.out.println("Enter the coefficient of Quadratic Equation :");
a=Integer.parseInt(br.readLine());
b=Integer.parseInt(br.readLine());
c=Integer.parseInt(br.readLine());
d=b*b-4*a*c;
}
void findRoot()
{
if(d>0)
{
R1=(-b+Math.sqrt(d))/2*a;
R2=(-b-Math.sqrt(d))/2*a;
System.out.println("First Root is="+R1);
System.out.println("Second Root is="+R2);
}
else
if(d==0)
{
R1=-b/2*a;
System.out.println("Both Root is="+R1);
}
else
System.out.println("Roots are Imaginary");
}
}
class Runroot
{
public static void main(String[] args)throws IOException
{
Root r=new Root();
r.input();
r.findRoot();
}
}

