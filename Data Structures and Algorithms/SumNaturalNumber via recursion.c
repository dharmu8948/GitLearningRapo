#include<stdio.h>
int main()
{
	int res,n;
	printf("Enter The Limit : ");
	scanf("%d",&n);
	res=sum(n);
	printf("%d\n",res);
}

int sum(int x)
{
	if(x==0)
	return 0;
	else
	return sum(x-1)+x;
}


//  simple code

/*
int sum(int x)
{
	if(x==0)
	return 0;
	else
	return x*(x+1)/2;
}
*/
