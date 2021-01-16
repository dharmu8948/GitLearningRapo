#include<stdio.h>
int main()
{
	int n,i,sum,j;
	printf("Enter the number of Elements: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter Elements:  ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the Sum:  ");
	scanf("%d",&sum);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==sum)
			{
				printf("Sum of %d and %d is = %d\n",a[i],a[j],sum);
				break;
			}
		}
	}
}
