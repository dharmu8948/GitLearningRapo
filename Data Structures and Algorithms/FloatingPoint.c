#include<stdio.h>
int main()
{
	float a;
	scanf("%f",&a);
	int b=a;
	printf("b=%d\n",b);
	float c;
	c=a-b;
	printf("c=%.1f\n",c);
	c*=10;
	printf("c=%f\n",c);
	b=c;
	printf("b=%d\n",b);
	if(b%2==0)
	printf("even");
	else
	printf("odd");
}
