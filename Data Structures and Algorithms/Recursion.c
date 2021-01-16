/*
#include<stdio.h>
long int fact(int n);
int main()
{
	int num;
	printf("Enter a Number :");
	scanf("%d",&num);
	if(num<0)
	printf("No factorial for Negative Numbers\n");
	else
	printf("Factorial of %d is %ld\n",num,fact(num));
}
long int fact(int n)
{
	if(n==0)
	return(1);
	else
	return (n*fact(n-1));
}
=====================================================================================================
#include<stdio.h>
int sum(int n);
int main()
{
	int num;
	system("color af");
	printf("Enter the Limit : ");
	scanf("%d",&num);
	if(num<0)
	printf("Summation of Negative Numbers Are Not Possible.");
	else
	printf("Summation of %d Number is %d",num,sum(num));
	getch();
}
int sum(int n)
{
	if(n==0)
	return 0;
	else
	return (n+sum(n-1));
	
	
}
================================================================================================
#include<stdio.h>
int rseries(int n);
int main()
{
	int num;
	system("color af");
	printf("Enter the Limit : ");
	scanf("%d",&num);
	printf("\b\b = %d\n\n",rseries(num));
}
int rseries(int n)
{
	int sum;
	if(n==0)
	return 0;
	sum=(n+rseries(n-1));
	printf(" %d + ",n);
	return sum;
}
======================================================================================================
#include<stdio.h>
int sumdigit(int n);
int main()
{
	int num;
	system("color af");
	printf("Enter the Number : ");
	scanf("%d",&num);
	printf("sum of digit is = %d",sumdigit(num));
}
int sumdigit(int n)
{
	if(n/10==0)
	return n;
	else
	return n%10+sumdigit(n/10);
}
=========================================================================================================
#include<stdio.h>
void convert(int n,int base);
int main()
{
	int num;
	system("color af");
	printf("Enter a decimal number : ");
	scanf("%d",&num);
	convert(num,2);
	printf("\n");
	convert(num,8);
	printf("\n");
	convert(num,16);
	printf("\n");
}
void convert(int n,int base)
{
	int rem=n%base;
	if(n==0)
	return ;
	convert(n/base,base);
	if(rem<10)
	printf("%d",rem);
	else
	printf("%c",rem-10+'A');
}
=======================================================================================

#include<stdio.h>
int main()
{
	printf("%d %d\n",func1(3,8),func2(3,8));
}
func1(int a,int b)
{
	if(a>b)
	return 0;
	return b + func1(a,b-1); //33
}
func2(int a,int b)
{
	if(a>b)
	return 0;
	return a + func1(a+1,b);  //33
}
====================================================================================

#include<stdio.h>
int main()
{
	printf("%d \n",func(3,8));
}
int func(int a,int b)
{
	if(a>b)
	return 1000;
	return a+func(a+1,b);
}
=====================================================================================

#include<stdio.h>
int main()
{
	printf("%d\n",func1(6));
	printf("%d\n",func2(6));
}
func1(int a)
{
	if(a==10)
	return a;
	return a + func1(a+1); //
}
func2(int a)
{
	if(a==0)
	return a;
	return a + func2(a-1);  //
}

===========================================================================================

#include<stdio.h>
int main()
{
	printf("%d\n",func(4,8));  // 30
	printf("%d\n",func(3,8));  //RunTime Exception 
}
func(int a,int b)
{
	if(a==b)
	return a;
	return a + b + func(a+1,b-1); 
}
=============================================================================================*/

#include<stdio.h>
int main()
{
	func1(10,18);
	printf("\n");
	func2(10,18);
}
void func1(int a,int b)
{
	if(a>b)
	return ;
	printf("%d ",b);
	func1(a,b-1);
}
void func2(int a,int b)
{
	if(a>b)
	return ;
	func1(a,b-1);
	printf("%d ",b);
}
