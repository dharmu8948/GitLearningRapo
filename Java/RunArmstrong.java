//WAP to check whether a number is armstrong number or not
import java.io.*;
class Armstrong
{
int n,r,P=0,x;
void Armstrong()throws IOException
{
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
System.out.println("Enter a number:");
n=Integer.parseInt(br.readLine());
}
void findArmstrong()throws IOException
{
x=n;
while(n>0)
{
r=n%10;
P=P+r*r*r;
n=n/10;
//System.out.println("New number="+P);
}
if(P==x)
	System.out.println("Armstrong");
else
System.out.println("Not a  Armstrong number");
}
}
class RunArmstrong
{
public static void main(String[] args)throws IOException
{
Armstrong Arm=new Armstrong();
Arm.Armstrong();
Arm.findArmstrong();
}
}
