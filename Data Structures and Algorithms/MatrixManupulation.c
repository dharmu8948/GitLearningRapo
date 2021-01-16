/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
int main()
{
	int n,m,i,j;
	scanf("%d",&m);
	scanf("%d",&n);
	int a[n][m],b[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		scanf("%d ",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<m;j++)
		{
			int temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

}

