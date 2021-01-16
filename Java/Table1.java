//WAP to print table of any number a value of number is initialize using Explicit default constructor
class Table1
{
int i,n,T;
Table1()
{
n=14;
System.out.println("This is class Table :");
}
void printTable1()
{
for(i=1;i<=10;i++)
{
T=n*i;
System.out.println(n+"*"+i+"="+T);
}
}
public static void main(String[] args)
{
Table1 T=new Table1();
T.printTable1();
}
}
