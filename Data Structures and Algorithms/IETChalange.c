/*
//#include<stdio.h>
int main()
{
	int n1,n2,r,sum1,sum2;
	int flag1=0,flag2=0,i,j;
	printf("Enter the Lower Limit :");
	scanf("%d",&n1);
	printf("Enter Upper Limit :");
	scanf("%d",&n2);
	for(i=n1;i<=n2;i++)
	{
		sum1=0,sum2=0;
		while(i>0)
		{
			r=i%10;
			sum1=sum1+r;
			sum2=sum2+r*r;
			i=i/10;
		}
		printf("\nsum1 is %d",sum1);
		printf("\nsum2 is %d",sum2);
	}
/*		for(i=2;i<sum1/2;i++)
	   {
		if(sum1%i==0)
		break;
		else
		flag1++;	
	   }
	if(flag1==0)
	   printf("%d ",sum1);
	   else
	   printf("Not a Prime sum");
	   	for(i=2;i<sum2/2;i++)
	{
		if(sum2%i==0)
		break;
		else
		flag2++;	
	}
	if(flag2==0)
	   printf("%d ",sum2);
	   else
	   printf("Not a Prime sum"); 
//	}
}
======================================================================================================
//......................Nature sum 1 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

      int n,i,rem,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum = sum + rem;
        n=n/10;
    }
    if(sum==2)
        printf("3");
    if(sum%2==0&&sum!=2)
    {
        printf("1");
    }
    int flag=0;

    if(sum%2!=0&& sum!=1)
    {
        for(i=2;i<sum;i++)
        {
            if(sum%i==0)
            {
                flag++;
                 break;
            }
        }
        if(flag!=0)
            printf("4");
    }
         if(sum%2!=0)
             printf("2");
    return 0;
}
================================================================================*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int isPrime(int n);
   int isPrime(int n)
   {
   	int i;
       if(n<2)
           return 0;
       for(i=2;i<=sqrt(n);i++)
           if(n%i==0)
               return 0;
       return 1;
   }
int main() {
    int n,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        sum+=n%10;
        n=n/10;
    }
    if(sum%2==0 && isPrime(sum))
        printf("3");
    else if(sum%2!=0 && isPrime(sum))
        printf("4");
    else if(sum%2==0)
        printf("1");
    else
        printf("2");
    return 0;
}

