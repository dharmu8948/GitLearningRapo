#include<stdio.h>
#include<limits.h>
int main()
{
	int n,i,max1,max2;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int first=INT_MIN;
	int second=INT_MIN;
	for(i=0;i<n;i++)
	{
		if(a[i]>first)
		{
			second=first;
			first=a[i];
		}
		else if(a[i]>second && a[i]!=first)
		{
			second=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=first && a[i]!=second)
		printf("%d ",a[i]);
	}
}
