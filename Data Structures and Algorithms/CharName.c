/*
#include<stdio.h>
void main()
{
	char str[20];
	printf("enter a String: ");
	scanf("%s",str);
	printf("%s",str); 
}


#include<stdio.h>
void main()
{
	char str[20];
	printf("enter Your Name: ");
	gets(str);
	printf("Name is: %s",str); 
}

// 2
#include<stdio.h>
main()
{
	printf("I Love \"c\" programming\n");
	printf("%u\n","good");
	printf("%u\n","good");
	if("bad"=="bad")
	printf("Same");
	else
	printf("Not Same");
	getch();
}

// 3
#include<stdio.h>
main()
{
	char str[]="India";
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		printf("character = %c\t",str[i]);
		printf("It gives Address = %u\t",&str[i]);
		//is diiferent from ..
		printf("It gives Ascii Code = %u\n",str[i]); 
	}
}


// 3
#include<stdio.h>
main()
{
	char str[ ]="India";
	char *p;
	p=str;
	int i;
	while(*p!='\0')
	{
		printf("character = %c\t",*p);
		printf("It gives Address = %u\t",p);
		//is diiferent from ..
		printf("Its Base Address = %u\n",&p); 
		p++;
	}
}


//program to understand the work of strlen() function

// 1
#include<stdio.h>
int main()
{
	char str[50];
	printf("Enter a String: ");
	scanf("%s",str);            // it takes only one word as input(Dharmendra)
	int length=strlen(str);
	printf("Length of String is: %d",length); // output: Length of String is: 10
}

#include<stdio.h>
int main()
{
	char str[50];
	printf("Enter a String: ");
	gets(str);            // it takes only Multiple word as input(Dharmendra Kumar)
	int length=strlen(str);
	printf("Length of String is: %d",length);  // output: Length of String is: 16
}


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


//creation of strlen function in pointer form
#include<stdio.h>
int main()
{
	char str[50];
	printf("Enter a String: ");
	gets(str);            // it takes only Multiple word as input(Dharmendra Kumar)
	int len = pStrLen(str);
	printf("Length of String is %d",len);
}
int pStrLen(char *str)
{
	char *start=str;
	while(*str!='\0')
	{
		str++;
	}
	return str-start;
}
// use of strcmp() 
#include<stdio.h>
main()
{
	char name1[20],name2[20];
	printf("Enter First Name: ");
	gets(name1);
	printf("Enter Second Name: ");
	gets(name2);
	if(strcmp(name1,name2)==0)
	printf("Same Name");
	else
	printf("Not Same");
}

//creation of strcmp()

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

*/

//using of strcpy()
#include<stdio.h>
int main()
{
	char str1[10],str2[10];
	printf("Enter First Name: ");
	gets(str1);
	printf("Enter Second Name: ");
	gets(str2);
	strcpy(str1,str2);      // it copies second string into first string
	printf("First String is %s \t\t Second String is: %s\n",str1,str2);
	strcpy(str1,"Mumbai");      // it copies second string into first string
	printf("First String is %s \t\t Second String is: %s\n",str1,str2);
}

