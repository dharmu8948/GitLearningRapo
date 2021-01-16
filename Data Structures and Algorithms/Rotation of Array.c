/*
//  1 rotation of array

#include<stdio.h>
int main()
{
	int n,k,c,i;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&k);
	for(i=k,c=0;i<n;i++,c++)
	{
		b[c]=a[i];
	}
	for(i=0;i<c;i++)
	b[c+i]=a[i];
	for(i=0;i<n;i++)
	printf("%d ",b[i]);
}

//   2 cyclic rotation

#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int temp=a[n-1];
	for(i=n-1;i>=1;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=temp;
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}


//  3  sum of pair found with the given element or not ??

#include<stdio.h>
int main()
{
	int n,i,j,sum=0,key;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum+=a[i]+a[j];
			if(sum==key)
			{
				printf("%d is found by using index %d and %d\n",key,i,j);
			//	break;
			}
			else
			sum=0;
		}
	}
}

*/


