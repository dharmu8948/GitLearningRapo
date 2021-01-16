//program to find twin prime number ie 3,5 & 11,13 etc. i,e differernce between two digit is 2
#include<stdio.h>
main()
{
int n,i,j,flag,p1=1,p2;
printf("\nEnter the limit  ");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
flag=0;
for(j=2;j<i;j++)
{
if(i%j==0)
{
flag=1;
break;
}
}
if(flag==0)
{
p2=i;
}
if((p2-p1)==2)
{
printf("\n%d %d",p1,p2);
}
p1=p2;
}
}
