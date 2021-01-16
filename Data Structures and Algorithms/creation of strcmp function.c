#include<stdio.h>
main()
{
	char name1[20],name2[20];
	printf("Enter First Name: ");
	gets(name1);
	printf("Enter Second Name: ");
	gets(name2);
	if(StringComparision(name1,name2)==0)
	printf("Same Name");
	else
	printf("Not Same");
}
int StringComparision(char name1[],char name2[])
{
	int i=0;
	while(name1[i]!='\0'&&name2[i]!='\0'&&name1[i]==name2[i])
	i++;
	if(name1[i]==name2[i])
	return 0;
	else
	return (name1-name2);
}
