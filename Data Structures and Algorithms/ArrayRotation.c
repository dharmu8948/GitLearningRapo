#include<stdio.h>
int main()
{
	int n,i,pos;
	printf("Enter the Number of Elements: ");
	scanf("%d",&n);
	int a[n],temp[n];
	printf("Enter the Elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the Position from which you want to rotated: ");
	scanf("%d",&pos);
	int j=0;
	for(i=pos;i<n;i++)
	{
		temp[j]=a[i];
		j++;
	}
	for(i=0;i<pos;i++)
	{
		temp[j]=a[i];
		j++;
	}
	printf("Elements are:  ");
	for(i=0;i<n;i++)
	{
		printf("%d ",temp[i]);
	}
}
