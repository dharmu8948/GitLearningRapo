#include<Stdio.h>

int Insertion_sort(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		j=i-1;
		int x=a[i];
		while(j>-1 && a[j]>x)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}
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
	Insertion_sort(a,n);
	printf("Sorted Elements Are  with insertion Sort:...");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
