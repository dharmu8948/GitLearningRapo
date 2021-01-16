#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],i,j,k;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		if(a[i]==a[i+1]){	
		a[i+1]=a[i]+1;
		for(k=i;k<n-1;k++)
		a[k]=a[k+1];
		i=-1;
		n--;
	}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
