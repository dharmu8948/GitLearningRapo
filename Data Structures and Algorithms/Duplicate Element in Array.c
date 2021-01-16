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
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(A[i]==A[j])
			{
				count++;
				printf("Duplicate Element found at index %d and %d is %d\n",i,j,A[i]);
				break;
			}
		}
	}
	if(count==0)
	printf("No Duplicate Element Exists:");
}
