//creation of strlen function in array form

#include<stdio.h>
int main()
{
	char str[50];
	printf("Enter a String: ");
	gets(str);            // it takes only Multiple word as input(Dharmendra Kumar)
	int len = aStrLen(str);
	printf("Length of String is %d",len);
}
int aStrLen(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}

