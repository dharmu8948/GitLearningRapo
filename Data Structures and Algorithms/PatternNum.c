/*

#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the Limit : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}



#include<stdio.h>
int main()
{
	int count=0,count1=0,i,j;
	int n,a[3],b[3];
	scanf("%d",&n);
    for(i=0;i<3;i++)
    {
    	scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
    {
    	scanf("%d",&b[i]);
	}
	for(i=0;i<3;i++)
	{
		if(a[i]>b[i])
		   count++;
		if(a[i]<b[i])
		   count1++;
		if(a[i]==b[i])
		   continue;
	}
	printf("%d %d",count,count1);
}


#include<stdio.h>
int main()
{
	int n,i,count=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int Max=a[0];
	for(i=1;i<n;i++)
	{
		if(Max<a[i])
		Max=a[i];
	}
	Max=a[0];
	for(i=1;i<n;i++)
	{
		if(Max==a[i])
		continue;
		else
		count++;
}
printf("%d",count);
} 
==========================================================================================================
//Date Conversion
//Sample Input  07:05:45PM
//Sample Output 19:05:45
#include <stdio.h>
int main(){
int hh, mm, ss ;
    char t12[3];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, t12) ;
        
    if (strcmp(t12,"PM")==0 && hh!=12) hh += 12 ;
    if (strcmp(t12,"AM")==0 && hh==12) hh = 0 ;
        
    printf("%02d:%02d:%02d", hh, mm, ss) ;
    return 0;
}

==========================================================================================================================

//print the number (i,j)pairs where i<j and a[i]+a[j] is evenly divisible by k

//Sample Input

//     6 3
//     1 3 2 6 1 2
//     Sample Output

//      5



#include<stdio.h>
int main()
{
	int n,k,i,j,count=0;
	scanf("%d",&n);
	scanf("%d",&k);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<j && (a[i]+a[j])%k==0)
			{
				count++;
			}
		}
	}
    printf("%d",count);	
}



===================================================================================================================*/

#include<stdio.h>
int main()
{
	int n,i,j,min;
	scanf("%d",&n);
	int a[n],b[10];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			printf("%d ",a[i]);
			b[i]=a[i];
		}
	}
	min=b[0];
	for(i=1;i<n;i++)
	{
		for(j=2;j<n;j++)
		{
			if(min>b[j])
			min=b[j];
		}
	}
	printf("%d",min);
}
