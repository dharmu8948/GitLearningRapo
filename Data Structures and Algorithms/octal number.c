#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
int n,r;
printf("\n Enter a Number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
if(r>7)
{
printf("\n Not a octal number");
exit(0);
}
n=n/10;
}
printf("\n octal number");
getch();
}
