/*

#include<stdio.h>
int main()
{
	char *s="Welcome";
	int i;
	for(i=0;s[i]!='\0';i++)
	{
	}
	printf("Length of String is %d  ",i);
}


//  Converting Uppercase to Lower Case Alphabet
#include<stdio.h>
int main()
{
	char A[] = "WELCOME";
	int i;
	for(i=0;A[i]!='\0';i++)
	{
		A[i]=A[i]+32;
	}
	printf("Lower Case of WELCOME is %s  ",A);
}

//  Converting LowerCase to Upper Case Alphabet
#include<stdio.h>
int main()
{
	char A[] = "welcome";
	int i;
	for(i=0;A[i]!='\0';i++)
	{
		A[i]=A[i]-32;
	}
	printf("Lower Case of welcome is %s  ",A);
}


//Counting Words in a Sentences

#include<stdio.h>
int main()
{
	char str[] = "How are You ";
	int i,words=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' '&& str[i-1]!=' '&& str[i+1]!=' ')
		words++;
	}
	printf("Number of Words in How are You is %d  ",words+1);
}

*/



// Find the Vowel Consonents and spaces in a Sentences

#include<stdio.h>
int main()
{
	char str[] = "How Are You Man";
	int i,Vcount=0,Ccount=0,Scount=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			Vcount++;
		}
		else if(str[i]>=65&&str[i]<=90||str[i]>=97&&str[i]<=122)
		{
			Ccount++;
		}
		else 
		{
			Scount++;
		}
	}
	printf("Vcount = %d\n Ccount = %d",Vcount,Ccount);
}
