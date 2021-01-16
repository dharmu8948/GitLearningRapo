#include<stdio.h>
#include<math.h>
int main()
{
	int b1,b2,rem1,sum1=0,rem2,sum2=0,res=0,sum;
	scanf("%d",&b1);
	scanf("%d",&b2);
    int i1=0,i2=0;
	while(b1>0)
	{
		rem1=b1%10;
		sum1=sum1+rem1*(pow(2,i1));
	//	printf("%d ",sum1);
		i1++;
		b1=b1/10;
	}
//	printf("\n");
//	printf("%d\n",sum1);
	while(b2>0)
	{
		rem2=b2%10;
		sum2=sum2+rem2*(pow(2,i2));
	//	printf("%d ",sum1);
		i2++;
		b2=b2/10;
	}
	printf("%d\n",sum2);
	sum=sum1+sum2;
	printf("%d\n",sum);
	int i=1;
	while(sum!=0)
	{
		int rem=sum%2;
		sum=sum/2;
		res=res+rem*i;
		i=i*10;
	}
	printf("%d ",res);
}
