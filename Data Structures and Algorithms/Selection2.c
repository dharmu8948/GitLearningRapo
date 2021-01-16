#include<stdio.h>
int main()
{
	int A[20],n,i,min,temp,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{
	min=i;
//	A[0]=A[min];
	for(j=i+1;j<n;j++)
	{
		if(A[j]<A[min])
		{
			min=j;
		
		}	
	}
	if(i!=min)
	{
			temp=A[i];
			A[i]=A[min];
			A[min]=temp;
	}
	printf("%d ",A[i]);
}
}
