#include<stdio.h>]\8
int main()
{
	int i,j;
	char str[] = "indian";
	for(i=0;str[i]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		{
			 if(str[i]==str[j])
			 printf("%c ",str[i]);
		}
	}
}
