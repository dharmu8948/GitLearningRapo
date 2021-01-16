#include<stdio.h>

void printPattern(int n){
	printf("%d ",n);
	if(n<=0)
	return;
	printPattern(n-5);
	printf("%d ",n);
	
}
int main(){
	int n,res;
	printf("Enter any Number: ");
	scanf("%d",&n);
	printPattern(n);
}
