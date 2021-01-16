#include<stdio.h>
int main()
{
	int AT[10],BT[10],TAT[10],WT[10];
	int i,j,n,rem_bt[20],t,ct[20];
	float AVTAT=0,AWT=0;
	printf("Enter the number of Process :");
	scanf("%d",&n);
	printf("Enter Arrival Time :");
	for(i=0;i<n;i++)
	scanf("%d",&AT[i]);   
	printf("Enter the Burst Time of Processes :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&BT[i]);
	}
	for(i=0;i<n;i++)
	rem_bt[20]=BT[20];
	i=0;
	n1=n;
	while(n>0)
	{
	if(rem_bt[i]!=0)
				{
					t+=rem_bt[i];
					rem_bt[i]=0;
					ct[i]=t;
					n--;
				}
				i++;
				if(n1==i)
				i=0;
	}
	WT[0]=0;
	// calculating waiting time
	for(i=1;i<n;i++)
	{
		WT[i]=0;
		for(j=0;j<i;j++)
		WT[i]+=BT[j];
	}
	//calculating turn around time
	printf("\nArrival Time\tBurst Time\tCompletion Time\tturn around time\tWaiting time:");
	for(i=0;i<n;i++)
	{
		TAT[i]=BT[i]+WT[i];
		AVTAT+=TAT[i];
		AWT+=WT[i];
		printf("\n%d\t\t%d\t%d\t\t%d\t\t\t%d ",AT[i],BT[i],ct[i],TAT[i],WT[i]);
		
	}
	AVTAT/=n;
	AWT/=n;
	printf("\nAverage Wating time=%f and Average Turn around Time=%f",AVTAT,AWT);
}
