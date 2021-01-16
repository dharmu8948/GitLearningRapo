#include<Stdio.h>

int swap(int *x,int *y)
{

	int temp= *x;
	    *x = *y;
	    *y = temp;
}
int Bubble_sort(int a[],int n)
{
	int i,j,NumberOfSwaps=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
				NumberOfSwaps++;
			}
		}
	}
	if(swap==0)
	printf("There is no swaps: ");
	else
	printf("total Number of swaps will be %d\n",NumberOfSwaps);
}
int main()
{
	int n,i;
	printf("Enter the Number of Elements :  ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the Elements Of Array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	Bubble_sort(a,n);
	printf("Sorted Elements Are :...");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
