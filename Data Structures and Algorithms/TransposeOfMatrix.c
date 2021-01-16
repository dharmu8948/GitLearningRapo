// without modifying the Matrix just print Elements...

/*
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
	printf("Transpose of matrix is...\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		printf("%d ",a[j][i]);
		printf("\n");
	}
}

*/
// with modifying the Matrix print Elements...

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
	printf("Transpose of matrix is...\n");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++)
		{
			int temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
	printf("%d ",a[i][j]);
	printf("\n");
	}
}
