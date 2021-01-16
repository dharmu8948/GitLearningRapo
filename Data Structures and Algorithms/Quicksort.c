#include <stdio.h>
void Quicksort(int[],int,int);
int partition(int[],int,int);
int main()
{
    int A[50],n,i;
    printf("Enter the number of Element :");
    scanf("%d",&n);
    printf("Enter array elements: \n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);  
    Quicksort(A,0,n-1);
    printf("\nArray after sorting: ");
    for(i=0;i<n;i++)
        printf("%d ",A[i]);   
    return 0;        
} 
void Quicksort(int A[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(A,l,u);
        Quicksort(A,l,j-1);
        Quicksort(A,j+1,u);
    }
}
int partition(int A[],int l,int u)
{
	int pivot=A[u];
	int i,j;
	i=l-1;
	for(j=l;j<u;j++)
	{
		if(A[j]<=pivot)
		{
			i=i+1;
			int temp=A[i];
			A[i]=A[j];
			A[j]=temp;
		}
	}
	int temp1=A[i+1];
	A[i+1]=A[u];
	A[u]=temp1;
	return (i+1);
}
