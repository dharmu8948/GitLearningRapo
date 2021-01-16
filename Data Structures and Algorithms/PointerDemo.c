
/*#include<stdio.h>
int main()
{
	int x=5;
	int *y=&x;
	printf("%d\n",x);
	printf("%d\n",&x);
	printf("%u\n",y);
	printf("%u\n",*y);
	printf("%d",&y);
}
=============================================================================*/
#include<stdio.h>
void f(int *p,int *q)
{
	p=q;
	*p=2;
}
int i=0,j=1;
int main()
{
	f(&i,&j);
	printf("%d %d\n",i,j);
}
