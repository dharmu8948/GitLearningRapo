#include<stdio.h>
int main()
{
   int size,array[1000]; 
  int sum=0,i;
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
