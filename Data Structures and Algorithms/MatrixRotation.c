#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n],i,j;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	printf("Before traversing the matrix.  \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j==n-1){
				int temp = a[i][j];
				a[i][j] = a[i][n-1-j];
				a[i][n-1-j] = temp;
			}
		}
	}
	
	printf("After first traversal of matrix.  \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i>0 && j==n-1){
				int temp = a[i][j];
				a[i][j] = a[0][j-i];
				a[0][j-i] = temp;
			}
		}
	}
	
	printf("After seond traversal of matrix.  \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i+j==n && i==n-1){
				int temp = a[i][j];
				a[i][j] = a[j][n-j-i];
				a[j][n-j-i] = temp;
			}
		}
	}
	
	printf("After third modification of matrix.  \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
}
