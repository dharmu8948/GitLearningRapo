//WAP to compute the area of triangle  if value of three side are entered to keyboard using default constructor 
import java.io.*;
class Tringle
{
int a,b,c;
double S,ar;
Tringle()throws IOException
{
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
System.out.println("Enter three sides of tringle:");
a=Integer.parseInt(br.readLine());
b=Integer.parseInt(br.readLine());
c=Integer.parseInt(br.readLine());
}
void findArea()
{
S=(a+b+c)/2;
ar=Math.sqrt(S*(S-a)*(S-b)*(S-c));
System.out.println("Area of Triangle="+ar);
}
}
class Runtringle
{
public static void main(String[] args)throws IOException
{
Tringle t=new Tringle();
t.findArea();
}
}
