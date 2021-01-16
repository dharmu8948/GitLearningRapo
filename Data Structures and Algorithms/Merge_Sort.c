#include<stdio.h>
Algorithm_Merge(int A[10],int B[10],int m,int n);
int main()
{
	int A[10],B[10],C[20];
	int i,j,k,m,n;
	printf("Enter the Number of List1 :");
	scanf("%d",&m);
	 printf("Enter the Element of First sorted List :");
	 for(i=0;i<m;i++)
	 {
	 	scanf("%d",&A[i]);
	 }
	 printf("Enter the Number of List :");
	scanf("%d",&n);
	 printf("Enter the Element of Second sorted List :");
	 for(j=0;j<n;j++)
	 {
	 	scanf("%d",&B[j]);
	 }
	 Algorithm_Merge(A,B,m,n);
	 printf("After Merging Elements are :");
	 for(i=0;i<m+n;i++)
	 printf("%d ",C[i]);
}
Algorithm_Merge(int A[],int B[],int m,int n)
{
	int C[20]={0};
	int i=0,j=0,k=0;
	while(i<m&&j<n)
	{
		if(A[i]<B[j])
		{
			C[k++]=A[i++];
		}
		else{
		C[k++]=B[j++];
	}
	}
	for( ;i<m;i++)
	C[k++]=A[i];
	for( ;j<n;j++)
	C[k++]=B[j];
}
