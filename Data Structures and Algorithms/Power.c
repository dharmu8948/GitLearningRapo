/*

#include<stdio.h>
int pow(int ,int );
int main()
{
	int m,n,res;
	printf("Enter the number : ");
	scanf("%d",&m);
	printf("Enter the Power for that Number : ");
	scanf("%d",&n);
	res=pow(m,n);
	printf("Power of %d to %d is %d",m,n,res);
	
}
int pow(int a,int b)
{
	if(b==0)
	return 1;
	else
	return a*pow(a,b-1);
}
*/
#include<stdio.h>
int pow(int ,int );
int main()
{
	int m,n,res;
	printf("Enter the number : ");
	scanf("%d",&m);
	printf("Enter the Power for that Number : ");
	scanf("%d",&n);
	res=pow(m,n);
	printf("Power of %d to %d is %d",m,n,res);
	
}
int pow(int a,int b)
{
	if(b==0)
	return 1;
	if(b%2==0)
	return pow(a*a,b/2);
	else
	return a*pow(a*a,(b-1)/2);
}
