#include<stdio.h>
main()
{
int a[50];
int i,j,n,temp,min;
printf("Enter the number of Elements");
scanf("%d",&n);
printf("Enter the elements :");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	i=min;
	for(j=i+1;j<n;j++)
	{
		if(a[j]<a[min])
		{
			min=j;
			temp=a[j];
			a[j]=a[min];
			a[min]=a[j];
		}
	}
}
printf("Sorted Elements are...:");
for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}
}
