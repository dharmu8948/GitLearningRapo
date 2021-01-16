#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int diff=a[0];
	for(i=0;i<n;i++){
		if(a[i]-i!=diff){
			while(diff<a[i]-i){
				printf("%d ",diff+i);
				diff++;
			}
		}
	}
}
