#include<stdio.h>
int knapsack(int [],int[],int ,int);
int max(int a,int b);
int max(int a,int b){
    return a>b?a:b;
}
int knapsack(int wt[],int val[],int w,int n){
	if(n==0||w==0)
	return 0;
	if(wt[n]>w)
	return knapsack(wt,val,w,n-1);
	else
	return max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
}
int main(){
	int n;
	scanf("%d",&n);
	int wt[n],val[n];
	int i,j,w;
	for(i=0;i<n;i++)
	scanf("%d",&wt[i]);
	for(i=0;i<n;i++)
	scanf("%d",&val[i]);
	scanf("%d",&w);
	int res = knapsack(wt,val,w,n);
	printf("%d",res);
}
