#include<stdio.h>
int fib(int);
int main(){
	int n;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	printf("%d",fib(n));
}
int fib(int k){
	if(k<=1)
	return k;
	else
	return fib(k-1)+fib(k-2);
}
