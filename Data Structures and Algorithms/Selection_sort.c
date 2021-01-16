#include<stdio.h>
int Selection_sort(int a[] ,int n)
{
	int i,k,j;
	for(i=0;i<n;i++)
	{
		for(j=k=i;j<n;j++)
		{
			if(a[j]<a[k])
			{
				k=j;
			}
		}
		int temp=a[i];
		a[i]=a[k];
		a[k]=temp;
	}
}
int main()
{
	int n,i;
	printf("Enter the number of element: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the Elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	Selection_sort(a,n);
	printf("Sorted Elements By Selection Sort: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
