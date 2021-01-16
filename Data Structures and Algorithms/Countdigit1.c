#include<stdio.h>
int main(){
	int n;
	printf("Enter the limit: ");
	scanf("%d",&n);
	int i,p,count=0;
	for(i=1;i<=n;i++){
		p=i;
		while(p>0){
		int rem = p%10;
		if(rem==1){
			count++;
			p=p/10;
		}
		else
		p=p/10;	
		}
	}
	printf("Number of occurences of 1's is..:  ");
	printf("%d",count);
}
