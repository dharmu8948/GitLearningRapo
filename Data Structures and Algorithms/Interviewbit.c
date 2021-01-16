#include<stdio.h>
int main()
{
	int n,j,k,sum1=0,sum2=0;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		sum1=sum1+a[j];
	}
	for(k=0;k<n;k++)
	{
		sum2=sum2+a[k];
	}
	if(sum1==sum2)
	for(j=0;j<n;j++)
	printf("%d,",a[i]);
	
}
