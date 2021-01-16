#include<stdio.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        int n,i,k;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            for(k=i+1;k<n;k++)
            {
                if(a[i]>a[k])
                {
                    int temp=a[i];
                    a[i]=a[k];
                    a[k]=a[i];
                }
            }
        }
        for(i=0;i<n-2;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}
