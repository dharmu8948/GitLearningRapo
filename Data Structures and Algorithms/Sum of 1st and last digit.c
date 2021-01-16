//program to find the sum of first and last digit of any number
#include<stdio.h>
int main()
{
    int n,r1,r2,r,sum=0;
    printf("Enter any positive number");
    scanf("%d",&n);
    r1=n%10;
    while(n>0)
    {
        r=n%10;
        r2=r2*10+r;
        n=n/10;
    }
    r2=r2%10;
    sum=r1+r2;
    printf("Sum of First and last Digit is=%d",sum);
}
