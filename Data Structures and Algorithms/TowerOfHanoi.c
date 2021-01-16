 #include<stdio.h>
int TOH(int,int,int,int);
int main()
{
	int res,n;
	printf("Enter Number of Disks : ");
	scanf("%d",&n);
	res = TOH(n,1,2,3);
	return 0;
}

int TOH(int n,int A,int B,int C)
{

	if(n>0)
	{
		TOH(n-1,A,C,B);
		printf("%d->%d\n",A,C);
		TOH(n-1,B,A,C);
	}
	
}
