/*
#include<stdio.h>
double e(int ,int);
int main()
{
	double res;
	res=e(4,10);
	printf("%lf \n ",res);

}
double e(int x,int n)
{
	static double p=1,f=1;
	double r;
	if(n==0)
	return 1;
	else
	{
		r=e(x,n-1);
		p=p*x;
		f=f*n;
		return r+p/f;
	}
}
=========================================================
#include<stdio.h>
double e(int ,int);
int main()
{
	double res;
	res=e(4,10);
	printf("%lf \n ",res);

}
double e(int x,int n)
{
	static double s=1;
	for(;n>0;n--)
	{
		s=1+(x/n)*s;
	}
    return s;
}
============================================================================*/
#include<stdio.h>
double e(int ,int);
int main()
{
	double res;
	res=e(4,10);
	printf("%lf \n ",res);

}
double e(int x,int n)
{
	static double s=1;
	if(n==0)
	return 1;
	else
	{
		s=1+(x/n)*s;
		return e(x,n-1);
	}
}
