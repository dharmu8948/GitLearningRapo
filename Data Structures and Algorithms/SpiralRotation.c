#include<stdio.h>
int printSpiral(int,int,int);
int main()
{
	int r,c,i,j;
	scanf("%d%d",&r,&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
	}
	printSpiral(a,r,c);	
}
int printSpiral(int a[][],int m,int n)
{
	int top=0,botom=m-1,left=0,right=n-1,i;
	int direction=0;
	while(top<=botom && left<=right)
	{
		if(direction==0)
		{
			for(i=left;i<=right;i++)
			printf("%d ",a[top][i]);
			top++;
			direction=1;
		}
		else if(direction==1)
		{
			for(i=top;i<=botom;i++)
			printf("%d ",a[i][right]);
			right--;
			direction=2;
		}
		else if(direction==2)
		{
			for(i=right;i<=left;i++)
			printf("%d ",a[botom][i]);
			botom--;
			direction=3;
		}
		else if(direction==3)
		{
			for(i=botom;i<=top;i++)
			printf("%d ",a[i][left]);
			left++;
			direction=0;
		}
	}
}
