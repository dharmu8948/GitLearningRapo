#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int simpleArraySum(int n, int array) {
  int sum=0,i,size;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
    scanf("%d",&array[i]);
    }
    for(i=0;i<size;i++)
    {
        sum+=array[i];
    }
    printf("%d",sum);
     return 0;
}

    
}

int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int sum=0; 
    simpleArraySum(n,array);
}
