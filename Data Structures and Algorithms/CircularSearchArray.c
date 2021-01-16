//searching elelment with distinct elements but not duplicates
#include<stdio.h>
int CircularSearchArray(int A[],int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(x==A[mid])
		return mid;    //case 1: found x
		if(A[mid]<=A[high])   //case 2: right half is sorted
		{
			if(x>A[mid]&&x<=A[high])
			low=mid+1;                //go to searching in right sorted half
			else
			high=mid-1;
		}
		else   //case 3: left half is sorted
		{
			if(A[low]<=x&&x<A[mid])    //go to searching in left sorted half
			high=mid-1;
			else
			low=mid+1;
		}
	}
	return -1;
}
int main()
{
	int A[]={12,14,18,21,3,6,8,9};
	int x;
	printf("Enter a Number: ");
	scanf("%d",&x);
	int index=CircularSearchArray(A,8,x);
	if(index==-1)
	printf("%d not found in the Array",x);
	else
	printf("%d was found at index %d",x,index);
}
