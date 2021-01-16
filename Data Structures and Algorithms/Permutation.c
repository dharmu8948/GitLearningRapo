#include<stdio.h>
int fact(int );
int nCr(int ,int );
int fact(int n)
{
	if(n==0)
	return 1;
	return fact(n-1)*n;
}

// this is simple code not recursive.Now we try for recursive function
/*
int nCr(int n,int r)
{
	double num,denum;
	num=fact(n);
	denum=fact(r)*fact(n-r);
	return num/denum; 
}

*/
int NCR(int n,int r)
{
	if(n==r||r==0)
	return 1;
	return NCR(n-1,r-1)+NCR(n-1,r);
 } 
int main()
{
	int a,b;
	printf("Enter Value of a for Permutation : ");
	scanf("%d",&a);
	printf("Enter Value of a for Permutation : ");
	scanf("%d",&b);
//	printf("%d ",nCr(a,b));   //This line useful for simple logic code which write as above
//Now next line is function calling for recursive function

	printf("%d ",NCR(a,b));
	return 0;
}
