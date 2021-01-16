//program to find max and min value
#include<stdio.h>
int main()
{
    int i,arr[10]={12,4,78,97,56,54,667,2,6,1};
    int MIN,MAX;
    MAX=MIN=arr[0];
    for(i=1;i<10;i++)
    {
       if(arr[i]<MIN)
        MIN=arr[i];
       if(MAX<arr[i])
        MAX=arr[i];
    }
    printf("Maximum number=%d Minimum number=%d\n",MAX,MIN);
}
