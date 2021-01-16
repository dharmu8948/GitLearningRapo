//finding missing elements using extra space in 0(n) times for unsorted array


#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,count=1,j;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int max=a[0];
	for(i=0;i<n;i++){
		if(max<a[i])
		max=a[i];
	}
	int H[max];
	for(i=0;i<max;i++)
	H[i]=0;
	
	for(i=0;i<max;i++){
		H[a[i]]++;
	}
	for(i=0;i<max;i++){
		if(H[i]==0)
		printf("%d ",i);
	}
}

//  
