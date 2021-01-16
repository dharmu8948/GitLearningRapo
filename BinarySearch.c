#include<stdio.h>
void BinarySearch(int A[],int n,int key);
int main()
{
	int A[20],n,i,key,mid;
	system("color b4");   //to change the background color
	printf("Enter the number of araay ");
	scanf("%d",&n);
	printf("Enter the element of the Array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter the element to searched :");
	scanf("%d",&key);
	BinarySearch(A,n,key);
}
void BinarySearch(int A[],int n,int key)
	{
		int l=0;
		int h=n-1,mid;
		while(l<=h)
		{
			mid=(l+h)/2;
			if(key==A[mid])
			{
				printf("Element %d found at index=%d",A[mid],mid);
				break;
			}
			if(key<A[mid])
			h=mid-1;
			else
			l=mid+1;
		}
		if(l>h)
		printf("Element not found");
	}
