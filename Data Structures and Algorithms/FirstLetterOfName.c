#include<stdio.h>
int main()
{
	char S[20],i,ch;
	printf("Enter your Name :");
	gets(S);
	for(i=0;S[i]!='\0';i++)
	{
		ch=S[0];
		if(S[i]==ch)
		if(i==0)
		printf("%c",ch);
	}
}
