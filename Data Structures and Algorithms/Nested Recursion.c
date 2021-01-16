// Nested Recursion
#include<stdio.h>
int fun(int);
int fun(int n)
{
	if(n>100)
	return n-10;
	else
	return fun(fun(n+11));
}
int main()
{
	int res,n;
	printf("Enter Any Number : ");
	scanf("%d",&n);
	res = fun(n);
	printf("%d ",res);
	return 0;
}
