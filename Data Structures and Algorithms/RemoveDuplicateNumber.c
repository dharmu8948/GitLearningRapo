#include<stdio.h>
int main()
{
	int index,i,j;
	printf("Enter the number of Elements: ");
	scanf("%d",&index);
	int arr[index];
	printf("Enter the Elements: ");
	for(i=0;i<index;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The Elements before Removing Duplicates: ");
	for(i=0;i<index;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("After Removing Duplicate Elements are....:  ");
}
