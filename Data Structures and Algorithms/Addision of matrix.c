#define ROW 3
#define COL 3
#include<stdio.h>
int main()
{
    int mat1[ROW][COL],mat2[ROW][COL];
    int i,j,sum[ROW][COL];
    printf("Enter the element of first matrix:\n");
    for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
          scanf("%d",&mat1[i][j]);
    printf("Enter the element of second matrix:\n");
    for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
        scanf("%d",&mat2[i][j]);
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
            {
            	sum[i][j]=sum[i][j]+mat1[i][j]+mat2[i][j];
            	
			}
            printf("\n");
    }
     for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
     printf("%5d",sum[i][j]);

}
