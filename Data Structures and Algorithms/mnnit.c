#include<stdio.h>
int main()
{
	int n,i;
	int A[20],B[20];
	printf("Enter the number of students :");
	scanf("%d",&n);
	printf("Enter the Marks of Students :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{
	//	B[i]=A[i];
		if(A[i]>33)
		{
			while(A[i]%5!=0){
			
			  A[i]+=1;
		}
	/*		  if(B[i]-A[i]<3)
			  printf("%d",B[i]);
			  else
			  printf("%d ",A[i]);  */
			
		}
		printf("%d\n",A[i]);
	}
	
}
