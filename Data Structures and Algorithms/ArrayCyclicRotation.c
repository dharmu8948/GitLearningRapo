#include <stdio.h>

int main() {
	    int n,i,j,k;
	    scanf("%d",&n);
	    int a[n];
	    for(j=0;j<n;j++)
	    {
	        scanf("%d",&a[j]);
	    }
	    int temp[n],l=0;
	    temp[l]=a[n-1];
	    l++;
	    for(k=0;k<n-1;k++)
	    {
	        temp[l]=a[k];
	        l++;
	    }
	    for(l=0;l<n;l++)
	    {
	        printf("%d ",temp[l]);
	    }
	    getch();
	//    printf("\n");
	return 0;
}
