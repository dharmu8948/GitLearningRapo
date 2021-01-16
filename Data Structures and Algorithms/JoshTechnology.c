#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	arr[0]=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[0]!=0)
		{
				printf("%d",0);
				break;
		}
		if(arr[i]==(arr[i+1]-1))
		{
			if((arr[i+1]-1)==arr[i])
			{
				continue;
			}
		}
		else
		{
			printf("%d",arr[i]+1);
			break;
		}
	}
}
