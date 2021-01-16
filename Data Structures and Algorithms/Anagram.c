#include<stdio.h>
int main()
{
	char str1[] = "verbose";
	char str2[] = "observe";
	int i,hash[26]={0};
	for(i=0;str1[i]!='\0';i++)
	{
		hash[str1[i]-97]+=1;
	}
	for(i=0;str2[i]!='\0';i++)
	{
		hash[str2[i]-97]-=1;
		if(hash[str1[i]-97]<0)
		{
			printf("Not Anagram");
			break;
		}
	}
	if(str2[i]='\0')
	printf("Anagram");
}
