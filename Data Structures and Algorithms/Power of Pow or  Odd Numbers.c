//        Input : 3
//        Output : 35 
//        1^2 + 3^2 + 5^2 = 35
       //   or
//         Input : 8
//         Output : 680
//         1^2 + 3^2 + 5^2 + 7^2 + 9^2 + 11^2 + 13^2 + 15^2 


#include<stdio.h>
int main()
{
	int n,i,j,m,sum;
	printf("Enter the number of test cases: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		scanf("%d",&m);
		for(j=1;j<=m;j++)
		{
			if(j%2!=0)
			{
				sum=sum+j*j;
			}
		}
		printf("%d\n",sum);
	}
}
