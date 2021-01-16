#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number of Disks: ");
	scanf("%d",&n);
	TOH(n,1,2,3);
}
void TOH(int p,int a,int b,int c)
{
	if(p>0)
	{
		TOH(p-1,a,c,b);
		printf("%d->%d\n",a,c);
		TOH(p-1,b,a,c);
	}
}
