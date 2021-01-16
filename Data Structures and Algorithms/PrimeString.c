#include<stdio.h>
int main()
{
	char str[50];
	int i,sum=0,flag=0;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		sum=sum+str[i];
	}
	for(i=2;i<sum;i++)
	{
		if(sum%i==0)
		{
			flag++;
			break;
		}
	}
	if(flag==0)
	printf("Yes");
	else
	printf("No");
}

