/*

//  With Iteration

#include<stdio.h>
int main()
{
	int n,a=-1,b=1,c,i;
	printf("Enter the Number of Terms:  ");
	scanf("%d",&n);
	printf("The Fibonacci Series is.....\n");
	for(i=0;i<n;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
}

*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number of Terms:  ");
	scanf("%d",&n);
	int res=fib(n);
	printf("%d ",res);
	
}
int fib(int n)
{
	if(n==0||n==1)
	{
		return n;
	}
	else
	{
		return fib(n-2)+fib(n-1);
	}
}
