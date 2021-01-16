#include<stdio.h>
int Binarysearch(int [],int,int);
int main(){
	int n;
	scanf("%d",&n);
	int a[n],k,i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&k);
	BinarySearch(a,n,k);
	if(BinarySearch(a,n,k))
	printf("found");
	else
	printf("Not found");
}
int Binarysearch(int A[],int n,int key){
	int l=0,h=n-1;
	int mid = (l+h)/2;
	if(A[mid]>key)
	BinarySearch(A,mid-1,h);
	else if(A[mid]==key)
	return 1;
	else if(A[mid]<key)
	BinarySearch(A,l,mid+1);
	else
	return 0;
}
