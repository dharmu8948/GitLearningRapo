#include <stdio.h>

int main() {
	int t,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    int n,k;
	    scanf("%d %d",&n,&k);
	    int a[n];
	    for(j=0;j<n;j++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int flag=0;
	    for(j=0;j<n;j++)
	    {
	        if(a[j] == k)
	        {
	        	int index=j+1;
	            printf("%d",index);
	        }
	    }
	   
	    printf("\n");
	}
	return 0;
}
