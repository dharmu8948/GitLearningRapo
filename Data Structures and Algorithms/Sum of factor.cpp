#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,factor=0;
	printf("Enter a number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		factor=factor+i;
	}
	printf("Sum of factors of %d is %d",n,factor);
	getch();
}
