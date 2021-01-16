#include<stdio.h>
int main()
{
	int A[20],n,i,j,temp,item;
	system("color b4");   //to change the background color
	printf("Enter the number of araay ");
	scanf("%d",&n);
	printf("Enter the element of the Array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter the Element to be Searched :");
	scanf("%d",&item);
	for(i=0;i<n;i++)
	{
		if(A[i]==item)
		{
			printf("Element=%d found at index=%d",A[i],i);
			break;
		}
	}
}
