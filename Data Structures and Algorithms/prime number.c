#include<stdio.h>
int main()
{
	int n,flag=0,i;
	printf("Enter a number ");
	scanf("%d",&n);
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		break;
		else
		flag++;	
	}
	if(flag==0)
	   printf("%d is not a prime number",n);
	else
	   printf("%d Prime Number",n);
}
