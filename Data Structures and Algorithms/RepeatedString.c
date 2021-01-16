#include<stdio.h>
int main()
{
	char ch[20];
	int i,n;
	scanf("%s",ch);
	int l=strlen(ch);
	scanf("%d",&n);
	char str[n];
	int j=0;
	for(i=0;i<n;i++)
	{
		if(i==l-1)
		{
			str[i]=ch[j];
			j=0;
		}
		else
		{
			str[i]=ch[j];
			j++;
		}
	}
	int count=0;
	for(i=0;i<n-1;i++)
	{
		if(str[i]=='a')
		{
			count++;
		}
	}
	printf("%d",count);
}
