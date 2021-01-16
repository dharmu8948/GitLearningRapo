#include<stdio.h>
int main()
{
	char str[10];
	int i,j;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c ",str[j]);
		}
		printf("\n");
	}
}
