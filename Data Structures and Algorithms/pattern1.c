#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter the Number of Limit : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		for(k=j;k<=i;k++)
		printf(" ");
		printf("\n");
	}
}
