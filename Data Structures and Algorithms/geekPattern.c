#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j,k,l,p;
	for(i=1;i<=n;i++){
		l=n;
		if(i==n){
				for(p=1;p<=n;p++)
		           printf("%d ",l--);
		}
		else{
			for(j=n;j>=1;j--){
			for(k=i;k<=n;k++)
			printf("%d ",l);
			l--;
		}
		}
		printf(" $");
	}
}
