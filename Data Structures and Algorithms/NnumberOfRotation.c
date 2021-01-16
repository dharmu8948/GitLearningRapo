#include <stdio.h>
int main() {
	    int n,i;
	    scanf("%d",&n);
	    long a[n];
	    for(i=0;i<n;i++)
		{
	        scanf("%ld",&a[i]);
	    }
	    int index=0;
	    for(i=0;i<n;i++)
		{
	        if(a[i]>a[i+1])
			{
	            index=i+1;
	            break;
	        }
	    }
	    scanf("%d",index);
	    printf("\n");
	return 0;
}
