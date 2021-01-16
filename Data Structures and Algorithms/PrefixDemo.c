#include<stdio.h>
int main()
{
	char str1[20],str2[20],str3[20];
	int i,l;
	printf("Enter three String: ");
    gets(str1);
	gets(str2);
	gets(str3);
	l=strlen(str1);
	for(i=0;i<l;i++)
	{
		if(str1[i]==str2[i]&& str2[i]==str3[i])
		printf("%c",str1[i]);
	}
}
