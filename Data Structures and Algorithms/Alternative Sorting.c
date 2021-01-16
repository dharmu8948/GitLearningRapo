#include<stdio.h>
int main()
{
	int A[20],n,i,j;
	printf("Enter the number of Element :");
	scanf("%d",&n);
	printf("Enter the Elements :");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(i=0;i<n;i++)
	{
		int max=i;
		for(j=0;j<n-i;j++)
		{
			int min=j;
			if(max<A[j])
			{
				max=j;
				printf("%d ",A[j]);
				if(min<A[j])
				{
					min=j;
					printf("%d ",A[j]);
				}
			}
			
		}
	}
}
