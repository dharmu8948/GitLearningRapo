#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int sum = 0,pow = 1;
   while(n > 0){
     int rem = n % 2;
     sum = sum + rem * pow;
     pow = pow *10;
     n = n / 2;
    }
    printf("%d\n",sum);
}
