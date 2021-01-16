#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	int a[n];

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
//	int count=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;)
		{
			if(a[j]==a[i])
			{
				for(k=j;k<n;k++)
				{
					a[k]=a[k+1];
				}
				n--;
			}
			else
			{
				j++;
			}
		}
	}
	//printf("%d",count);
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
