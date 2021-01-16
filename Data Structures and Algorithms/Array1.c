/*
#include<stdio.h>
int main()
{
	int n,sum,i,j;
	int a[]={90,30,-1,10,-10,50};
	printf("Enter the Number: ");
	scanf("%d",&sum);
	for(i=0;i<n;i++)
	{
		if(a[i]+a[i+1]==sum)
		{
			printf("%d %d",a[i],a[i+1]);
			break;
		}
	}
}
=========================================================================
// missed element
#include<stdio.h>
int main()
{
	int n,i,sum;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		sum=0;
		sum=sum+a[i]+a[i+1];
		if(sum%2==0)
		{
			printf("Missed element=%d\n",a[i]+1);
		}
	}
}


// Duplicate Elements
#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]==a[j+1])
			{
				printf("duplicate Element is %d\n",a[i]);
			}
		}
	}
}

*/
