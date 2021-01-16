#include<stdio.h>
int main()
{
	int n,ne=0,no=0;
	printf("Enter a number ");
	scanf("%d",&n);
    if(((n/2))*2==n)     // or if(n%2==0)
    printf("Even Number");
    else
    printf("Odd number");
}
