#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int temp=a[n-1];
	for(i=n-1;i>=1;i--)
	a[i] = a[i-1];
	a[0]=temp;
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
