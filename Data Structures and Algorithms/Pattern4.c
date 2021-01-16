//       * * * * * *
//       *         *
//       * * * * * *

/*
#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<6;j++)
		{
			if(i==1)
			{
				if(j==0||j==4)
				printf("*      ");
				else
				printf(" ");
			}
			else
		   printf("* ");
		}
		printf("\n");
	}
}

//Binary Search
#include<stdio.h>
int main()
{
	int n,item,i;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	int A[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter the Element to be searched: ");
	scanf("%d",&item);
    BinarySearch(A,n,item);
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
	
	
	*/
// find number of duplicate elements in sorted array	
	#include<stdio.h>
	int main()
	{
		int n,i,item;
		printf("Enter the Number of Elements: ");
		scanf("%d",&n);
		int A[n];
		printf("Enter the Elements:  ");
		for(i=0;i<n;i++)
		{
			scanf("%d",&A[i]);
		}
		printf("Enter the number of Ocurrences: ");
		scanf("%d",&item);
		int count=0;
		for(i=0;i<n;i++)
		{
			if(A[i]==item)
			{
				count=count+1;
			}
			else if(A[i]>item)
			break;
		}
		printf("%d",count);
	}
