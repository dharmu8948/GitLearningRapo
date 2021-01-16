/*

#include<stdio.h>
int main()
{
	int n,i,j;
    scanf("%d",&n);
    int P;
    for(i = -(n-1); i < n; i++)
    {
        P = n;
        for( j = -(n-1); j <= 0 ; j++)
        {
            printf("%d  ", abs(j) <= abs(i) ? P : P--);
        }
        for(j = 1; j < n; j++)
        {
            printf("%d  ", abs(j) <= abs(i) ? P : ++P);  //abs==absolute value
        }
        printf("\n");
    }
}

=======================================================================================================================


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
    // Find non-increasing suffix
    int i = n-1;
    while(i>0 && strcmp(s[i-1],s[i])>=0) 
        i--;    // find key
    if (i<=0) return 0;
    
    // Swap key with its successor in suffix
    int j = n-1;
    while(strcmp(s[i-1],s[j])>=0) 
        j--;    // find rightmost successor to key
    char *tmp = s[i-1];
    s[i-1] = s[j];
    s[j] = tmp;
    
    // Reverse the suffix
    j = n-1;
    while(i<j) {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        i++;
        j--;
    }
    return 1;
}

int main()
{
	char **s;
	int n,i;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}

=======================================================================================================================

#include<stdio.h>
int main()
{
	int n,k,i,sum=0,j,l;
	scanf("%d",&n);
	scanf("%d",&k);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<k;j++)
	scanf("%d",&l);
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	int Max=a[0];
	for(i=1;i<n;i++)
	{
		if(Max<a[i])
		{
			Max=a[i];
		}
	}
	sum=sum-Max;
	int res=sum/2;
//	printf("%d\n",res);
//	for(i=0;i<k;i++){
	if(res<l)
	printf("%d",(l-res));
	if(l==res)
	printf("Bon Appetit");
}
=======================================================================================================================


#include <bits/stdc++.h>

using namespace std;


int main() {
    int n,k;
    int sum=0,diff=0;
    cin >>n;
    cin>>k;
    vector<int> ar(n);
    for(int i = 0; i < n; i++){
       cin >> ar[i];
    }
    for(int j=0;j<n;j++)
        {
        sum+=ar[j];
    }
    
    int b;
    cin >> b;
    sum=sum-ar[k];
    sum=sum/2;
    diff=b-sum;
    if(b>sum)
        {
      cout<<diff;
    }
    else
        {
        cout<<"Bon Appetit";
    }
    
    return 0;
}

=======================================================================================================================

#include<stdio.h>
int main()
{
	int n,i,p,j,count=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		p=1;
		if(a[i]!=0)
		{
		    for(j=i+1;j<n;j++)
		    {
		        if(a[i]==a[j])
		        {
		    	    p++;
		    	    a[j]=0;
	             }
	        }
	        count+=p/2;
	}
	
    }
	printf("%d",count);
}

======================================================================================================
#include<stdio.h>
main()
{ 
int i,j;
for(i=68;i>=1;i--)
{
	for(j=65;j<=i;j++)
	{
		printf("%c ",j);
	//	printf("%c ",i);
	}
	printf("\n");
}
}
=========================================================================================================*/
#include<stdio.h>
#include<conio.h>
main()
{
 int i,j;
// clrscr();
 for(i=68;i>=65;i--)
 {
  // printf("\n");
   for(j=65;j<=i;j++)
   {
     printf("%c ",j);
   }
   for(j=68;j>i;j--)
   {
     printf("  ");
   }

   for(j=68;j>i;j--)
   {
     if(j==68)
     {
      continue;
     }
     printf("  ");
   }

   for(j=i;j>=65;j--)
   {
       if(j==68)
       {
	continue;
       }
      printf("%c ",j);
   }
   printf("\n");

 }
 getch();

}

