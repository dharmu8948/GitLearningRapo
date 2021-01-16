#include <stdio.h>

int main() {
	int t,i,j,k;
	scanf("%d",&t);
	while(t>0)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0,j=n-1;i<j;i++,j--)
	    {
	        int temp=a[i];
            a[i]=a[j];
           a[j]=temp;
	    }
	    for(i=0;i<n;i++)
	     printf("%d ",a[i]);
	    printf("\n");
	    t--;
	}
	return 0;
}
