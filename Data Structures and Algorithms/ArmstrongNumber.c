#include<stdio.h>
int main()
{
	int n,count=0,sum=1,result,i;
	printf("Enter the number: ");
	scanf("%d",&n);
	int x=n;
	
	while(n>0)
	{
		n=n/10;
		count++;
	}
	int p=x;
	while(p>0)
	{
		int rem=p%10;
		for(i=1;i<=count;i++)
		sum=sum*rem;
		result+=sum;
		sum=1;
		p=p/10;
	}
	if(x==result)
	printf("1");
	else
	printf("0");
}
