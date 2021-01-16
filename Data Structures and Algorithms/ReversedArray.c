#include<stdio.h>
int main()
{
	int n,temp,i,j;
	printf("Enter Number of Elements: ");
	scanf("%d",&n);
	int A[n];
	printf("Enter Elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=A[i];
		A[i]=A[j];
		A[j]=temp;
	}
	printf("Reversed Elements is.... : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
}
