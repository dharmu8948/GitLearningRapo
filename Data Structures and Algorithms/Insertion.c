/*

#include<stdio.h>
int main()
{
	int A[20],n,i,j,temp;
	printf("Enter the number of Element :");
	scanf("%d",&n);
	printf("Enter the Element of Array :");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(A[i]>A[j])
			{
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
	printf("Sorted Elements Are....:");
	for(i=0;i<n;i++)
	printf("%d ",A[i]);
}

================================================================================================================

*/



#include<stdio.h>
int main()
{
	int n,i,j,key;
	printf("Enter the number of Element :");
	scanf("%d",&n);
	int A[n];
	printf("Enter the Element of Array :");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(i=1;i<n;i++)
	{
		key=A[i];
		j=i-1;
		while(j>=0&&A[j]>key)
		{
			A[j+1]=A[j];
			j=j-1;
		//	A[j+1]=key;
		}
		A[j+1]=key;
	}
	printf("Sorted Element is....");
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
}
