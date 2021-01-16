
//     Input
//      2
//     20 5
//     50 2
//     Output
//      5 15
//      2 12 20 21 22 23 24 25 26 27 28 29 32 42



#include<stdio.h>
int main()
{
	int t,n,d,i;
	scanf("%d",&t);
	while(t--)
	{
		int x,rem=0;
		scanf("%d",&n);
		scanf("%d",&d);
		if(d==0)
		printf("%d ",d);
		for(i=1;i<=n;i++)
		{
			x=i;
			while(x)
			{
				rem=x%10;
				if(rem==d)
				{
					printf("%d ",i);
					break;
				}
				x=x/10;
			}
		}
		printf("\n");
	}
}

/*


#include <stdio.h>

int main() {
int t,n,d,x,i;
scanf("%d",&t);
while(t)
{
int temp=0,flag=0;
scanf("%d %d",&n,&d);
if(d==0)
printf("%d ",d);
for(i=1;i<=n;i++)
{
x=i;
while(x)
{
temp=x%10;
if(temp==d)
{
printf("%d ",i);
flag=1;
break;
}
x=x/10;
}
}
if(flag==0 && d!=0)
printf("-1");
t--;
printf("\n");
}
//code
return 0;
}

*/
