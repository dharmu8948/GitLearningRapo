#include<stdio.h>
int main()
{
	int a[50],n,i,temp,j;
	printf("Enter the Number of Elements : ");
	scanf("%d",&n);
	printf("Enter The Elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The Elements Before Reversing : ");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
     for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
	printf("After array reversing is\t:");
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
    printf("\n");
}
