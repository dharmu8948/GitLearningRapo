#include<stdio.h>
int main()
{
	int i=10;
	int *p=&i;
	int q=p;
	//*q=5;            invalid type argument first declare it
	printf("%d",*p);
}
