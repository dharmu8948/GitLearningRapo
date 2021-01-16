

#include<stdio.h>
int main()
{
	int n,i,j,k,p,a;
	printf("Enter the Number of Lines : ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=1;j--)
		{
			for(k=1;k<=i;k++)
			{
				printf("%d ",j);
			}			
		}
		printf("$ ");
	}
}

/*==========================================================================================================

#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the Number of elements : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the Numbers : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			printf("%d ",a[i]);
		}
	}
}

====================================================================================================================

#include<stdio.h>
int PalinArray(int ,int);
int main()
{
	int n,rem,i;
	scanf("%d",&n);
	int a[n],sum[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}  
	   
	   int a[]={111,222,333};
	PalinArray(a[3],3);
}

int PalinArray(int a[3], int n)
{  
int i,rev,rem,temp,flag=1;
for(i=0;i<n;i++)
{
rev=0;
temp=a[i];
while(temp>0)
{
rem = temp%10;
rev = rem + rev*10;
temp = temp/10;
}
if(a[i]!= rev)
{
flag = 0;
break;
}
}
return flag;
}

==================================================================================================================

#include <stdio.h> 
  
void thirdLargest(int arr[], int arr_size) 
{ 
    // There should be atleast three elements 
    int i;
    if (arr_size < 3) 
    { 
        printf(" Invalid Input "); 
        return; 
    } 
  
    // Find first largest element 
    int first = arr[0]; 
    for (i = 1; i < arr_size ; i++) 
        if (arr[i] > first) 
            first = arr[i]; 
  
    // Find second largest element 
    int second = INT_MIN; 
    for (i = 0; i < arr_size ; i++) 
        if (arr[i] > second && arr[i] < first) 
            second = arr[i]; 
  
    // Find third largest element 
    int third = INT_MIN; 
    for (i = 0; i < arr_size ; i++) 
        if (arr[i] > third && arr[i] < second) 
            third = arr[i]; 
  
    printf("The third Largest element is %d\n", third); 
} 
  
//   Driver program to test above function 
int main() 
{ 
    int arr[] = {12, 13, 1, 10, 34, 16}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    thirdLargest(arr, n); 
    return 0; 
} 

*/
