#include<stdio.h>
int main()
{
	int n,flag=0,i,primefact;
	printf("Enter a number ");
	scanf("%d",&n);
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		break;
		else
		printf("prime factor is=%d ",i);
	}
}
