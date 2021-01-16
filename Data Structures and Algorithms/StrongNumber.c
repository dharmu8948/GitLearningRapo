#include<stdio.h>
int main()
{
	int n,sum=0,fact=1,i;
	printf("Enter the Number: ");
	scanf("%d",&n);
	int x=n;
	while(n>0)
	{
		int rem=n%10;
		for(i=1;i<=rem;i++)
		fact=fact*i;
		sum = sum+fact;
		fact=1;
		n=n/10;
	}
	if(x==sum)
	printf("1");
	else
	printf("0");
}
