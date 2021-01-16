#include<stdio.h>
void Countsort(int A[],int,int B[],int);
main()
{
	int A[15],B[15],n,i,k;
	printf("Enter the number of Array : ");
	scanf("%d",&n);
	 printf("Enter the limt of number :");
    scanf("%d",&k);
	printf("Enter the Element of the Array\n");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
//	k=10;
 //   printf("Enter the limt of number :");
 //   scanf("%d",&k);
	Countsort(A,n,B,k);
	printf("Sorted elements are :");
	for(i=0;i<n;i++)
	printf("%d ",B[i]);
}
void Countsort(int A[],int n,int B[],int k)
{
	int i,j,c[k];
	for(i=0;i<k;i++)
	c[i]=0;
	for(j=0;j<n;j++)
	{
		c[A[j]]=c[A[j]]+1;
	}
	for(i=1;i<=k;i++){
		c[i]=c[i]+c[i-1];
	}
	for(j=n-1;j>=0;j--)
	{
		B[c[A[j]]-1]=A[j];
		c[A[j]]=c[A[j]]-1;
	}
}
