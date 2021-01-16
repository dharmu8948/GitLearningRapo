#include<stdio.h>
int main()
{
	char str[20],s[20],i,j,k=0;
	scanf("%s",str);
	int n= strlen(str);
	for(i=n/2;i<n;i++)
	{
		for(j=n/2;j<=i;j++)
		{
			s[k]=str[j];
			printf("%c",s[k]);
			k++;
		}
		printf("\n");
	}
	for(i=0;i<n/2;i++)
	{
		for(j=0;j<=i;j++)
		{
			s[k]=str[j];
		    printf("%c",s[k]);
		    k++;
		}
		printf("\n");
	}	
}
