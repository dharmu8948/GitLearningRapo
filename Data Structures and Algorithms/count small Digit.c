#include<stdio.h>
int main()
{
	int n,i,j,k,x,m,count;
	int a[10000];
	printf("Enter the number of test cases: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		count=0;
		printf("Enter the number of elements in Array %d :  ",i);
		scanf("%d",&m);
		printf("Enter Elements of Arrays: ");
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[j]);
		}
		printf("Enter the number which is Less than or equal to a number in array: ");
		scanf("%d",&x);
		for(k=0;k<m;k++)
		{
			if(a[k]<=x)
			{
				count++;
			}
		}
		printf("The number of elements in array ,which is less than %d is: ",x);
		printf("%d",count);
		printf("\n");
	}
//	printf("%d\n",count);
}
