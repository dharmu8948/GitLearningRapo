#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three numbers ");
    scanf("%d%d%d",&a,&b,&c);
    int R = (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Greatest Number=%d",R);
}
