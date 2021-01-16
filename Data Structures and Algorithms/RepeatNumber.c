#include<stdio.h>
int main()
{
	int Seen[10]={0};
	int i,n;
	printf("Enter The Number  : ");
	scanf("%d",&n);
	while(n>0)
	{
		int rem=n%10;
		if(Seen[rem]==1)
		break;
		Seen[rem]=1;
		n=n/10;
	}
	if(n>0)
	printf("Yes");
	else
	printf("No");
	getch();
}
