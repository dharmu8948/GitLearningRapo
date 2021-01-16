#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three number: ");
	scanf("%d %d %d",&a,&b,&c);
	printf("Smallest Number is: ");
	if(a<b)
	{
		if(a<c)
		printf("%d",a);
		else
		printf("%d",c);
	}
	else
	{
		if(b<c)
		printf("%d",b);
		else
		printf("%d",c);
	}
}
