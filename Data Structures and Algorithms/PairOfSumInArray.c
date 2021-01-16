/*

#include<stdio.h>
int main()
{
	int n,i,j,sum;
	printf("Enter Number of Elements: ");
	scanf("%d",&n);
	int A[n];
	printf("Enter Elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter the number to be searched: ");
	scanf("%d",&sum);
	for(i=0;i<n;i++)
	{
            int first = A[i];
            for (j = i + 1; j < n; j++) {
                int second = A[j];

                if ((first + second) == sum) {
                    printf("(%d, %d) %n", first, second);
                }
            }

        }
    }
    

    
    
#include<stdio.h>
int main()
{
   int n,i,j,k;
   scanf("%d",&n);   
for(i = n; i>=1; i--)
{
for(j=n; j>=1; j--)
{
for(k = 1; k<=i; k++)
{
printf("%d",j);
}
}
printf("$");
}
}



#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d ",n*i);
    }
	return 0;
}

*/
#include <stdio.h>

int main() {
    double n,i;
    scanf("%lf",&n);
    if((n/2)*2==n)
    printf("Even");
    else
    printf("Odd");
}
