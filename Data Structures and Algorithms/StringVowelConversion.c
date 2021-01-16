#include<stdio.h>
int main()
{
	char str1[20],str2[20];
	int l,i;
	printf("Enter String: ");
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	strrev(str1);
//	printf("%s\n",str1);
//	printf("%s",str2);
	l=strlen(str1);
	for(i=0;i<l;i++)
	{
		if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u')
		{
			if(str2[i]=='a'||str2[i]=='e'||str2[i]=='i'||str2[i]=='o'||str2[i]=='u')
			{
				char temp=str1[i];
				str1[i]=str2[i];
				str2[i]=temp;
			}
		}
	//	printf("%c ",str1[i]);
	}
	puts(str2);
	
}
