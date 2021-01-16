#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int k;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		int temp=a[0];
		for(j=0;j<n-1;j++)
		a[j]=a[j+1];
		a[j]=temp;
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
