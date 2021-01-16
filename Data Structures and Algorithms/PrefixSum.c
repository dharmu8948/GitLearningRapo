//   time omplexity  0(n)
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number of Elements:  ");
	scanf("%d",&n);
	int a[n],l,r,i;
	printf("Enter the elements:  ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the boundaries...  ");
	scanf("%d%d",&l,&r);
	int sum=0;
	for(i=l;i<=r;i++){
		sum += a[i];
	}
	printf("Sum of the given boundaries...  ");
	printf("%d",sum);
}

*/
// time complexity  =  0(1) by using preprosessing of array...

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number of Elements:  ");
	scanf("%d",&n);
	int a[n],l,r,i;
	printf("Enter the elements:  ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the boundaries...  ");
	scanf("%d%d",&l,&r);
	int prefix_sum[n];
	prefix_sum[0]=a[0];
	int sum=0;
	for(i=1;i<=n;i++)
	prefix_sum[i] = prefix_sum[i-1]+a[i];
	
	
	// here finding elements in big-o-1 time .
	if(l!=0)
	sum += prefix_sum[r]-prefix_sum[l-1];
	else
	sum += prefix_sum[r];
	printf("Sum of the given boundaries...  ");
	printf("%d",sum);
}
