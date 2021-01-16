#include<stdio.h>
int main()
{
    int i,j,temp,a[10]={10,9,8,7,6,5,4,3,2,1};
    for(i=0,j=9;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("After array reversing is :");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
}
