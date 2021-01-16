#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int max=a[0];
	for(i=1;i<n;i++){
		if(max<a[i])
		max=a[i];
	}
	int p[max];
	for(i=0;i<max;i++)
	p[i]=0;
	for(i=0;i<max;i++)
	p[a[i]]++;
	for(i=0;i<max;i++){	
	if(p[i]==1)
	printf("%d ", i);
    }
}
