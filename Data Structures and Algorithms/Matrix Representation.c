/*
#define ROW 3
#define COL 4
#include<stdio.h>
int main()
{
    int mat[ROW][COL],i,j;
    printf("Enter the elementof the matrix row wise :\n",ROW,COL);
    for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
          scanf("%d",&mat[ROW][COL]);
    printf("The matrix that you have entered is:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        printf("%5d",mat[ROW][COL]);
        printf("\n");
    }
    printf("\n");
}

=============================               Matrix Multiplication           ========================================





void multiply(int A[][100], int B[][100], int C[][100], int N)
{
       for (int i=0; i < N; i++) {
        for (int j=0; j <N; j++) {
            int sum = 0;
            for (int k=0; k < N; k++) {
                sum += A[i][k]*B[k][j];
            }
            C[i][j] = sum;
        }
    }
}


==================================================================================================================
*/

#include <stdio.h>

int main() {
    int n,so=0,se=0,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++){
	
	    if(a[i%2==0])
	    {
	        so=so+a[i];
	    }
	    else
	    {
	        se=se+a[i];
	    }
	   // a[i]=a[i]/10;
	}
	printf("%d\n",so);
	printf("%d\n",se);
	return 0;
}
