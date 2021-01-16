#include<stdio.h>
int main()
{
	int A[3],B[3],i,ca=0,cb=0;
	printf("Enter the Element of First Array : \n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter the Element of Second Array : \n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&B[i]);
	}
	//for(i=0;i<3;i++)
	i=3;
	while(i>0)
	{
		if(A[i]>B[i]){
		ca++;
		i++	;
		}
		else if(A[i]<B[i]){
		cb++;
		i++;	
		}
		else
		i++;
	}
	printf("%d ",ca);
	printf("%d ",cb);
}
