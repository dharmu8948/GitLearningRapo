#include<stdio.h>
int main()
{
	int n,factor=0,i;
	printf("Enter a number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
       if(n%i==0) 
       factor=factor+i;
    }
    if(n==factor)
    printf("%d is the perfect number",n);
    else
    printf("It is not a perfect number");
}
	
       
