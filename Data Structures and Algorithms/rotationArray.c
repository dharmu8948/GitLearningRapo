#include<stdio.h>
int main()
{
	int n,k,i;
	scanf("%d",&n);
	scanf("%d",&k);
	int a[n],rev[n],p=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=k;i<n;i++)
	{
		rev[p]=a[i];
		p++;
	}
	for(i=0;i<k;i++)
	{
		rev[p]=a[i];
		p++;
	}
	for(i=0;i<n;i++)
	printf("%d ",rev[i]);
}
