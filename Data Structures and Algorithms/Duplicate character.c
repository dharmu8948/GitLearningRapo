#include<stdio.h>
int main()
{
	char S[1000];
	int i,freq=0;
	gets(S);
	for(i=0;S[i]!='\0';i++)
	{
		if(S[i]==S[i+1])
		{
			freq++;
		}
	}
	
	printf("%d",freq);
}
