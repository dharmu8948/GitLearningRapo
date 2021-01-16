#include<stdio.h>
int main()
{
	int n,k,i,rem;
	scanf("%d",&n);
	scanf("%d",&k);
	int a[n],temp[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	if(k>n)
	rem = k%n;
	else
	rem=k;
	int l=0;
	for(i=rem;i<n;i++)
	{
		temp[l]=a[i];
		l++;
	}
	for(i=0;i<rem;i++)
	{
		temp[l] = a[i];
		l++;
	}
	for(i=0;i<n;i++)
	printf("%d ",temp[i]);
}
