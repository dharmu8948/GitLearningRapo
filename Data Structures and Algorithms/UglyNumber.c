#include<stdio.h>
int maxDivide(int a,int b)
{
	while(a%b==0)
	a=a/b;
	return a;
}
int isUgly(int no)
{
	no=maxDivide(no,2);
	no=maxDivide(no,3);
	no=maxDivide(no,5);
	return (no==1)?1:0;
}
int getNthUgly(int n)
{
	int i=1,count=1;
	while(n>count)
	{
		i++;
		if(isUgly(i))
		{
			count++;
		}
	}
	return i++;
}
int main()
{
	int no;
	printf("Enter nth Ugly Number: ");
	scanf("%d",&no);
	int n=getNthUgly(no);
	printf("Nth Ugly Number is: %d",n);
	return 0;
}
