

/*
#include<stdio.h>
int main()
{
	char str[20];
	int i;
	printf("Enter any String: ");
	gets(str);
	int l=strlen(str);
		printf("Reverse of String is: ");
	for(i=0;str[i]!='\0';i++)
	{  
		printf("%c",str[l-1-i]);
		
	}
}




#include<stdio.h>
int main()
{
	char str[20];
	int i,count=0;
	printf("Enter any String: ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("%d",count);
}
*/


#include<stdio.h>
int main()
{
	char str1[20],str2[20];
	int i,flag=0;
	printf("Enter any String: ");
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	strrev(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==str2[i])
		flag=1;
		else
		{
			flag=0;
			break;
		}
	}
		if(flag==0)
		printf("0");
		else
		printf("1");
}
