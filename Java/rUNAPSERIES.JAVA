//WAP to generate the A.P. SERIES valueof a,d,n are initilize ysing parameterized constructor using call by value
class APSeries
{
int a,d,n,i,T;
APSeries(int x,int y,int z)
{
a=x;
d=y;
n=z;
System.out.println("Welcome in class APSeries:");
}
void printAP()
{
System.out.println("APSeries:");
for(i=0;i<n;i++)
{
T=a+(i*d);
System.out.println(T);
}
}
}
class Runapseries
{
public static void main(String[] args)
{
//APSeries AP1=new APSeries();
APSeries AP=new APSeries(5,4,10);
AP.printAP();
}
} 