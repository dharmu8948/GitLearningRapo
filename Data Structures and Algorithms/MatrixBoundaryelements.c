// print only boundary elements in 0(n+n)times.

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
	printf("Boundary Elements are....\n");
	int k;
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++)
		printf("%d ",a[i][j]);
		k=n-1;
		for(j=0;j<n-1;j++)
		printf("%d ",a[j][k]);
		k=j;
		for(j=n-1;j>=1;j--)
		printf("%d ",a[k][j]);
		for(j=n-1;j>=0;j--){
			printf("%d ",a[j][i]);
			k--;
		}
		break;
	}
}

