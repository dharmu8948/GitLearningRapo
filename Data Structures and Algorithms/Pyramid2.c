#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		int count=1;
		for(j=1;j<2*n;j++){
			if(j>=(n-i+1)&&j<=(n+i-1)){
				printf(" %d ",count);
				j<n?count++:count--;
			}
			else 
			printf("   ");
		}
		printf("\n");
	}
}
