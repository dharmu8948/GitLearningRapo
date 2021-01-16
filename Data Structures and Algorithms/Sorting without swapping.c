#include<stdio.h>
int main()
{
	int A[20];
	int n,i,j,Max[20];
	printf("Enter the number of Element ");
	scanf("%d",&n);
	printf("Enter the Elements of array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	Max[0]=A[0];
	for(j=0;j<n;j++)
	{
	for(i=j+1;i<n;i++)
	{
		if(Max[j]<A[i])
		Max[j]=A[i];
	}
    }
	for(j=0;j<n;j++)
	printf("%d ",Max[j]);
}
