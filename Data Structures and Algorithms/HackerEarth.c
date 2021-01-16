/*
#include <stdio.h>

int main(){
	int num,key,i;
	scanf("%d", &num);
	int arr[num];
	scanf("%d",&key);
	for(i=0;i<num;i++)
	{
	   scanf("%d",&arr[i]);
	}
	for(i=num-1;i>=0;i--)
	{
	     if(arr[i]==key)
	   {
	   	    i++;
	        printf("%d",i);
	        break;
	   }
	    
	}
}




#include<stdio.h>
int main()
{
	int n,i,j,temp,x;
//	printf("Enter the number of Element :");
	scanf("%d",&n);
	int A[n];
		scanf("%d",&x);
//	printf("Enter the Element of Array :");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(i=0;i<n;i++)
	{
	    int min=i;
	    
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[min])
			min=j;
		}
		temp=A[min];
		A[min]=A[i];
		A[i]=temp;
	}
//	printf("Sorted Elements Are....:");
	for(i=0;i<n;i++)
	printf("%d ",A[i]);
}
*/

#include<stdio.h>
int main()
{
	int n,i,sum,ind;
	printf("Enter the number of Element :");
	scanf("%d",&n);
	int A[n];
	printf("Elements are: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter the Sum: ");
	scanf("%d",&sum);
	printf("Enter limit of Indices: ");
	scanf("%d",&ind);
	int count=0,j;
	if(n==0)
	{
		if(sum==A[n])
		{
			count++;
			printf("%d",count);
		}
	}
	if(n>0)
	{
		for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		//	if(i+j<=ind)
		//	{
				if(A[i]+A[j]==sum)
				{
					count++;
				}
		//	}
		}
	}
	}
	printf("%d",count);
}
