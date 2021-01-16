/*
#include<stdio.h>
int main()
{
	char str[50],l;
	printf("Enter any String: ");
	gets(str);
	l=astrlen(str);
	printf("Length of string is %d",l);
	getch();
}
int astrlen(char str[])
{
	int i=0;
	while(str[i]!='\0')
	i++;
	return i;
}

                                               // creation of strcmp()
#include<stdio.h>
int main()
{
	char str1[50],str2[50];
	printf("Enter any String: ");
	gets(str1);
	printf("Enter any String: ");
	gets(str2);
	printf("First String is %s\n",str1);
	printf("Second String is %s\n",str2);
	astrcmp(str1,str2);
	if(astrcmp(str1,str2)==0)
	printf("Same String");
	else
	printf("String Does not Matched");
}
int astrcmp(char str1[],char str2[])
{
	int i=0;
	while(str1[i]!='\0' && str2[i]!='\0' && str2[i]==str2[i])
	i++;
	if(str1[i]==str2[i])
	return 0;
	else
	return (str1[i]-str2[i]);
}


                                               // creation of strcpy()
#include<stdio.h>
int main()
{
	char str1[50],str2[50];
	printf("Enter any String: ");
	gets(str1);
	printf("Enter any String: ");
	gets(str2);
	printf("First String is %s\n",str1);
	printf("Second String is %s\n",str2);
	astrcpy(str1,str2);
	printf("first String is %s\t\tSecond String is %s",str1,str2);
	return 0;
}
astrcpy(char str1[],char str2[])
{
	int i=0;
	while(str2[i]!='\0')
	{
		str1[i]=str2[i];
		i++;
	}
	str1[i]='\0';
	return str1;
	
}
*/

                                               // creation of strcat()
#include<stdio.h>
int main()
{
	char str1[50],str2[50];
	printf("Enter any String: ");
	gets(str1);
	printf("Enter any String: ");
	gets(str2);
	printf("First String is %s\n",str1);
	printf("Second String is %s\n",str2);
	astrcat(str1,str2);
	printf("first String is %s\t\tSecond String is %s",str1,str2);
	return 0;
}
astrcat(char str1[],char str2[])
{
	int i=0,j=0;
	while(str1[i]!='\0')
	i++;
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
	return str1;
	
}
