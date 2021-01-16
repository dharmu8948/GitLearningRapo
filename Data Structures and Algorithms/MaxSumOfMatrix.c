#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int matrix[6][6],i,j;
    for(i = 0;i < 6;i++) {
        for(j = 0;j < 6;j++) {
             scanf("%d",&matrix[i][j]);
        }
    }
    int maxsum = -1000,jj = 0;
    for(i = 0;i < 4;i++) {
        int sum = 0;
        for(j = jj;j < jj+3;j++) {
            sum += matrix[i][j];
            if(j==jj) sum += matrix[i+1][jj+1];
            sum += matrix[i+2][j];
        }
        jj = (jj < 3) ? jj+1 : 0;
        if(sum > maxsum) maxsum = sum;
        if(jj != 0) i--;
    }
    printf("%d",maxsum);
    return 0;
}
