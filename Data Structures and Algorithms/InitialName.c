#include<stdio.h>
int main()
{
	char S[50],i,A[50];
	printf("Enter Your Full Name :");
	gets(S);
    while(S[i]!='\0')
    {
    	if(i==0)
    	printf("%c.",S[i]);
    	else if(S[i]==' ')
    	{
    	//putchar(S[i+1]);
    	printf("%c.",S[i+1]);
     	}
	  i++;
	}
}
