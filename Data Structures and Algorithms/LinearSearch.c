#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d",&n);
	scanf("%d",&k);
	int a[n],i,flag=0;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	if(k==a[i])
	{
		flag=1;
		printf("Element found at index %d",i);
		break;
	}
	if(flag==0)
	printf("Element not found in the Array");
}
