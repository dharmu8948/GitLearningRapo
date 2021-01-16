//WAP TO PRINT AVERAGE
class SumAverage
{
public static void main(String[] args)
{
int ar[]={10,20,30,40,50,60,70,80,90,100};
int sum=0,avg;
for(int value:ar)
{
System.out.println(value);
sum=sum+value;
}
avg=sum/ar.length;
System.out.println("sum is="+sum);
System.out.println("Average is="+avg);
}
}