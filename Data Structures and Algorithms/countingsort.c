#include<stdio.h>
int main()
{
	int a[20],b[20],c[10],n,i,j,k;
	printf("Enter the number of array:");
	scanf("%d",&n);
	printf("Enter the element of Array :");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
	}
	counting_sort(a,b,k);
	printf("Sorted Elements are :");
	for(i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}
}
   counting_sort(int a[],int b[],int k)
   {
   	int i,j,n,c[10];
	for(i=0;i<k;i++)
	c[i]=0;
	for(j=1;j<n;j++)
	c[a[j]]=c[a[j]]+1;
	for(i=2;i<k;i++)
	{
		c[i]=c[i]+c[i-1];
	}
	for(i=n;i>=1;i--)
	{
		b[c[a[j]]]=a[j];
		c[a[j]]=c[a[j]]-1;
	}
}
