#include<stdio.h>
int getMax(int A[],int n);
void countsort(int A[],int n,int exp);
void radixsort(int A[],int a);
int getMax(int A[],int n)
{
	int Max=A[0],i;
	for(i=0;i<n;i++)
	{
		if(Max<A[i])
		Max=A[i];
	}
	return Max;
}
void countsort(int A[],int n,int exp)
{
	int OP[n];   //output array
	int i,count[10]={ 0, };
	//start count of occurence ofcount[]
	for(i=0;i<n;i++)
	count[(A[i]/exp)%10]++;
	for(i=0;i<10;i++)
	count[i]+=count[i-1];
	//built the out put array
	for(i=n-1;i>=0;i--)
	{
		OP[count[(A[i]/exp)%10]-1]=A[i];
		count[(A[i]/exp)%10]--;
	}
	for(i=0;i<n;i++)
	{
		A[i]=OP[i];
		printf("%d\t",A[i]);
	}
	printf("\n");
}
void radixsort(int A[],int n)
{
	int Max=getMax(A,n);
	int exp;
	for(exp=1;Max/exp>0;exp*=10)
	   countsort(A,n,exp);	
}
int print(int A[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d\t",A[i]);
}
int main()
{
	int n=4,i;
	int A[4]={124,5,67,0};
	print(A,n);
	printf("\n");
	radixsort(A,n);
	return 0;
}
