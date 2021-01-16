#include<stdio.h>
int main()
{
	char str[100],ch;
	int count=0,i;
	printf("Enter the String: ");
	gets(str);
	printf("Enter the character for searching: ");
	scanf("%c",&ch);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		{
			count++;
		}
	}
	printf("Total frequency of %c is %d",ch,count);
}
