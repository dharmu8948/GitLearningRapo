#include <stdio.h>

int main() {
	int t,n,k,i,j,e,l;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    scanf("%d",&k);
	    int a[n],b[n];
	    for(j=0;j<n;j++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int p=0;
	    for(l=k;l<n;l++)
	    {
	        b[p]=a[l];
	        p++;
	    }
	    for(e=0;e<k;e++)
	    {
	        b[p++]=a[e];
	    }
	    for(j=0;j<n;j++)
	    {
	        printf("%d ",b[j]);
	    }
	}
	return 0;
}
