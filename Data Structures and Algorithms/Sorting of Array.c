#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n],b[n],k=0,j;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j+1] && a[j+1]%2!=0)
			{
				b[k]=a[j+1];
				k++;
			}
			else
			{
				b[n-k-1]=a[j+1];
			    k++;
			}
		}
	}
	
	for(k=0;k<n;k++)
	printf("%d ",b[k]);
	
}
