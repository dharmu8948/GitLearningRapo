
// lcm of two numbers
#include<stdio.h>
int main()
{
	int a,b,LCM;
	printf("Enter first Number: ");
	scanf("%d",&a);
	printf("Enter second Number: ");
	scanf("%d",&b);
	LCM=LCMCal(a,b);
	printf("Least Common Multiple of %d and %d is %d",a,b,LCM);
}
int LCMCal(int a, int b)
{
	int i;
	for(i=1;i<=a*b;i++)
	if(i%a==0 && i%b==0)
	return i;
}
