#include<stdio.h>
int main()
{
	int n1,n2,sum1=0,sum=0,rem1,rem2,rem,res=0;
	printf("Enter the First Number : ");
	scanf("%d",&n1);
	printf("Enter the Second Number : ");
	scanf("%d",&n2);
	while(n1>0 && n2>0)
	{
		sum1=0;
		rem1=n1%10;
		rem2=n2%10;
		sum1=sum1+rem1+rem2;
		if(sum1>=10)
		sum=sum*10+sum1%10;
		else
		sum=sum*10+sum1;
		n1=n1/10;
		n2=n2/10;
	}
	while(sum>0)
	{
		rem=sum%10;
	    res=res*10+rem;
		sum=sum/10;
	}
	printf("%d",res);
}
