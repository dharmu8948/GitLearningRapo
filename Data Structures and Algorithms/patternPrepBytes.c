#include<stdio.h>
void pattern(int);
int main()
{
	int n;
	printf("Enter the the limit: ");
	scanf("%d",&n);
	pattern(n);
}
void pattern(int k){
	printf("%d ",k);
	if(k<=0)
	return;
	pattern(k-5);
	printf("%d ",k);
}
