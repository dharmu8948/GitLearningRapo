
// this approach is valid only for 2's power elements like wise: 1,2,4,8,16,32,64,128,256......
#include<stdio.h>
int main(){
	unsigned int n,k;
	scanf("%d%d",&n,&k);
	printf("%d",(n&(k-1)));
}
