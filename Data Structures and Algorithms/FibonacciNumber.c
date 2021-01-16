#include<stdio.h>
int main()
{
	int A[20],i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	int a=-1,b=1,sum[18]; 
	for(i=0;i<18;i++)
	{
		sum[i]=a+b;
		a=b;
		b=sum[i];
	}
	for(i=0;i<n;i++)
	{
			for(j=0;j<18;j++)
			{
				if(sum[i]==A[j])
				{
					printf("%d ",A[j]);
					break;
				}				
			}
	}
}
