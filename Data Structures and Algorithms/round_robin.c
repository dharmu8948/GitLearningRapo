#include<stdio.h>
int main()
{
	int n,bt[n],quantum,rem_bt[n],i,ct[n],t=0,n1;
	int process[]={0};
	printf("Enter number of process ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  printf("Enter the Number of Process and Burst time :");
	  scanf("%d\n%d",&process[i],&bt[i]);
    }
    printf("Enter Quantum Number :");
    scanf("%d",&quantum);
    for(i=0;i<n;i++)
    rem_bt[i]=bt[i];
    i=0;
    n1=n;
    	while(n>0)
    	{
    		if(rem_bt[i]>quantum)
    		{
    			rem_bt[i]-=quantum;
    			t+=quantum;
			}
			else
			{
				if(rem_bt[i]!=0)
				{
					t+=rem_bt[i];
					rem_bt[i]=0;
					ct[i]=t;
					n--;
				}
				
			}
			i++;
		if(i==n1)
		i=0;
		}
	printf("Process_name Burst_time Completion time and time \n");
	for(i=0;i<n1;i++)
	printf("%d\t\t %d\t %d\t\t\t %d\n",process[i],bt[i],ct[i],t);
    
}
