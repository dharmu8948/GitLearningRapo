#include<stdio.h>
void fun(int [][3]);
int main()
{
	int a[3][3]={9,8,7,6,5,4,3,2,1};
	fun(a);
	printf("%d\n",a[2][1]);
}
void fun(int b[][3])
{
	++b;
	b[1][1]=5;
}
