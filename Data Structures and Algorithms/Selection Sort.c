#include<stdio.h>
int main()
{
	int A[20],n,i,j,temp,Min;
	system("color b4");   //to change the background color
	printf("Enter the number of araay ");
	scanf("%d",&n);
	printf("Enter the element of the Array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{
		Min=i;
	//	A[MAX]=A[i];
		for(j=i+1;j<n;j++)
		{
			if(A[Min]>A[j])
			{
				Min=j;
			//	temp=A[j];
			//	A[j]=A[i];
			//	A[i]=temp;
			}
		}
		if(i!=Min)
		{
			temp=A[i];
			A[i]=A[Min];
			A[Min]=temp;
		}
	}
	printf("Sorted Element are....");
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
}
