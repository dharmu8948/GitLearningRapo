//WAP to find factorial of a number using class and object
class Factorial
{
int n,i,f=1;
void getnum(int x)
{
n=x;
}
void findFact()
{
for(i=1;i<=n;i++)
{
f=f*i;
}
System.out.println("Factorial is="+f);
}
}
class Runfact
{
public static void main(String[] args)
{
Factorial ob=new Factorial();
 ob.getnum(7);
 ob.findFact();
 }
 }