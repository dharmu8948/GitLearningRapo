#include <stdio.h>
 long long Solution(long long int arr[],long long int n,long long int sum)
    {
    	int j;
        long long curr_sum=0,i=0;
        curr_sum=arr[0];
        for(j=1;j<=n;j++)
        {
            while(curr_sum>sum && i<j)
            {
                curr_sum-=arr[i];
                i++;
            }
            if(curr_sum==sum)
            {
                printf("%lld %lld",i+1,j);
                return 1;
            }
            if(curr_sum<sum)
            curr_sum=curr_sum+arr[j];
        }
        printf("-1");
        return 0;
    }

int main() {
	int t,i;
	long long int n,sum;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%lld%lld",&n,&sum);
	    long long int arr[n];
	    for(i=0;i<n;i++)
	    scanf("%lld",&arr[i]);
	    Solution(arr,n,sum);
	    printf("\n");
	}
	return 0;
}
