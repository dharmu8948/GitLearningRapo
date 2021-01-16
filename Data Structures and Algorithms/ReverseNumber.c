#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
        int sum=0;
        int t=x;
        while(x!=0)
        {
                int rem=x%10;
                sum=sum*10+rem;
                x=x/10;
        }
        if(t<0)
       {
       	sum=sum*(-1);
       	 printf("%d",sum);
	   }
        else
            printf("%d",sum);
}
