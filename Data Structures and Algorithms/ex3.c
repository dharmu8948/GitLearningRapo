#include<stdio.h>
int cubesum(int);
int main()
{
    int x,y;
    printf("Enter a number :");
    scanf("%d",&x);
    y=cubesum(x);
    if(x==y)
        printf("cube of sum is %d",y);
    else
        printf("Invalid choice");
}
int cubesum(int n)
{
    int sum=0,r;
    while(n!=0)
    {
        r=n%10;
        sum=sum+n*n*n;
        n=n/10;
    }
    return sum;
}
