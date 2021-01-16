//this is only for unsorted array
#include<stdio.h>
int FindRotationCount(int A[],int n)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		if(A[low]<=A[high])
		return low; //case 1
		int mid=(low+high)/2;
		int next=(mid+1)%n,prev=(mid+n-1)%n;
		if(A[mid]<=A[next]&&A[mid]<=A[prev])  //case 2
		return mid;
		else if(A[mid]<=A[high])
		high=mid-1;
		else if(A[mid]>=A[low]) low=mid+1;
	}
	return -1;
}
int main()
{
//	int A[]={15,22,23,28,31,38,5,6,8,10,12};
    int A[]={1,2,3,4,5,6,7,8,9,10,11};
	int count = FindRotationCount(A,11);
	printf("The array is rotated %d times",count);
}
