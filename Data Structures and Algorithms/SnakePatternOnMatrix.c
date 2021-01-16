
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number of Row and Column:   ");
	scanf("%d",&n);
	int a[n][n],i,j;
	printf("Enter the Elements of Matrix..: ");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Sanke Pattern of Matrix is..\n");
	for(i=0;i<n;i++){
		int flag=0;
		if(i%2==0)
		for(j=0;j<n;j++)
		printf("%d -> ",a[i][j]);
		else{
			for(j=n-1;j>=0;j--)
		printf("<- %d ",a[i][j]);
		}
		printf("\n");
	}
}
