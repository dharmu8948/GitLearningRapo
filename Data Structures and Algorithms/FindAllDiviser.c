#include<stdio.h>
int main()
{
	int n,i,a,j,rem;
	printf("Enter the Number: ");
	scanf("%d",&n);
	printf("Enter the number which want to be search: ");
	scanf("%d",&a);
	for(i=1;i<=n;i++)
	{
		j=i;
		while(j>0)
		{
		//	p=i;
			rem=j%10;
		    if(rem==a)
		    {
		    	printf("%d ",i);
		    	break;
			}
		    j=j/10;
		}
	}
}
