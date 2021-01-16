#include<stdio.h>
int main()
{
    int i=01,num,arr[2],j;
    printf("Enter a decimal number :");
    scanf("%d",&num);
    while(num>0&&i!=2)
    {
        arr[i]=num%2;
        printf("%d ",arr[i]);
        num/=2;
        i++;
    }
}
