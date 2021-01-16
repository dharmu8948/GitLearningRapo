#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int lastDuplicate=0;
	for(i=0;i<n;i++){
		if(a[i]==a[i+1] &&a[i]!=lastDuplicate){
			printf("%d ",a[i]);
			lastDuplicate=a[i];
		}
	}
}
