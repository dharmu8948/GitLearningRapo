#include<stdio.h>
int main()
{
	int A[5]={12,8,7,20,5};
	int i,j,Max;
	for(j=0;j<5;j++)
	{
		Max=j;
	for(i=j+1;i<5;i++)
	{
		if(Max<i)
		Max=i;
	}
    }
    for(i=0;i<5;i++)
	printf("%d ",A[i]);
}
