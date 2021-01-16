//program to find all prime number
#include<stdio.h>
main()
{ int i,j,n,flag;
printf("\nEnter the limit ");
scanf("%d",&n);
for(i=2;i<n;i++)
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
printf("%d ",i);
}
}
}
