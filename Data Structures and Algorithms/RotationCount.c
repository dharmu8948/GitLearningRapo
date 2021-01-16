#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n],temp[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		temp[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int swap = a[j];
				a[j] = a[j+1];
				a[j+1] = swap;
			}
		}
	}
	int count=0;
	for(i=0;i<n;i++)
	{
		if(temp[i]!=a[0])
		{
			count++;
		}
		else
		{
			break;
		}
	}
	printf("%d",count);
}
