#include<stdio.h>
int main()
{
	int n,k,i,j,l;
	scanf("%d",&n);
	scanf("%d",&k);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i+=k-1)
	{
		for(j=i,l=k-1;j<=l;j++,l--)
		{
			int temp=a[j];
			a[j]=a[l];
			a[l]=a[j];
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
