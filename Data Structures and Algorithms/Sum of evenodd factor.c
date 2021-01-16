#include<stdio.h>
int main()
{
	int n,ne=0,no=0,i;
	printf("Enter a number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
       if(i%2==0) 
       ne=ne+i;
       else
       no=no+i;
   }
   printf("Sum of even number is %d",ne);
   printf("Sum of odd number is %d",no);
}
