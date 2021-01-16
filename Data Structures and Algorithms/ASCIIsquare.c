#include <stdio.h>

int main() {
    int t,i,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        int n,sum=0,flag=0;
        scanf("%d",&n);
        char str[n];
        gets(str);
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]>=97&&str[i]<=122||str[i]>=65&&str[i]<=90||str[i]>=48&&str[i]<=57)
            sum=sum+str[i];
             
        }
        printf("sum of ASCII values of given string=%d\n",sum);
        int t=sum;
        for(i=1;i<=t/2;i++)
        {
            if(i*i==sum)
            {
                printf("1");
                flag++;
                break;
            }
        }
        if(flag==0)
        printf("0");
        printf("\n");
    }
	return 0;
}
