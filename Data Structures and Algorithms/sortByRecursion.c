#include<stdio.h>
void sort(int[],int );
int getmaxIndex(int[],int);

int main(){
	int n;
	sanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	sort(a,n);
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
int getmaxIndex(int a[],int n){
	int i,max,maxIndex;
	max = a[0];
	maxIndex=0;
	for(i=1;i<n;i++)
	if(max<a[i]){
		max=a[i];
		maxIndex=i;
	}
	return maxIndex;
}
void sort(int a[],int n){
	int maxIndex,t;
	if(n>1){
		maxIndex=getmaxIndex(a,n);
		t = a[n-1];
		a[n-1] = a[maxIndex];
		a[maxIndex] = t;
		sort(a,n-1);
	}
	else return;
}
