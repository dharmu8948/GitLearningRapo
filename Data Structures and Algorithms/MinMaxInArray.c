#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter Number of Elements: ");
	scanf("%d",&n);
	int A[n];
	printf("Enter Elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	int count=0;
	int min=A[0],max=A[0];
	for(i=1;i<n;i++)
	{
		if(min>A[i])
		{
			min=A[i];
		}
		if(max<A[i])
		{
			max=A[i];
		}
	}
	printf("Minimum Element is %d\n",min);
	printf("Maximum Element is %d\n",max);
}
