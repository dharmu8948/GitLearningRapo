#include<stdio.h>
QuickSort(int A[],int,int);
Partition(int A[],int,int);
int main()
{
	int A[50],n,i;
	int p,q,r;
	printf("Enter the number of Element :");
	scanf("%d",&n);
	printf("Enter the Elements");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	QuickSort(A[50],p,r);
	printf("Array After Sorting....");
	for(i=0;i<n;i++)
	printf("%d  ",A[i]);
}
QuickSort(int A[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=Partition(A,p,r);
		QuickSort(A,p,q-1);
		QuickSort(A,q+1,r);
	}
	
}

Partition(int A[],int p,int r)
{
	int x=A[r];
	int i=p-1;
	int temp,j;
	for(j=p;j<r-1;j++)
	{
		if(A[j]<=x)
		{
			i=i+1;
			temp=A[i];
			A[i]=A[j];
			A[j]=temp;
			printf("%d ",A[i]);
		}
		else
		{
			temp=A[i+1];
	        A[i+1]=A[r];
        	A[r]=temp;
            printf("%d ",i+1);
		}
	}
}
