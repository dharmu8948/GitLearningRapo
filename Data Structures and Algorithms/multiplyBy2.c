#include<stdio.h>
int multiplyBy2(int);
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",multiplyBy2(n));
}
int multiplyBy2(int k){
	int rem,value;;
	rem=k%10;
	switch(rem){
		case 0:
			value=0;
			break;
		case 5:
			value = 1;
			break;
		default:
			value = -1;
			break;
	}
	return value;
}
