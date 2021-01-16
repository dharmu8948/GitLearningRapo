//program for fibonacci series
/*
#include<stdio.h>
int main()
{
  int n,f1=0,f2=0,sum=1;
  printf("Enter the number of terms ");
  scanf("%d",&n);
  while(n>0)
  {
      printf("%d ",sum);
      f1=f2;
      f2=sum;
      sum=f1+f2;
      n--;
  }
}
=============================================================================*/
//program to check the given number is primne or not ??
#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("Enter a number  ");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        {
            flag++;
            break;
        }
        i++;
    }
    if(flag!=0)
        printf("Not a Prime number");
    else
        printf("Prime number");
}
