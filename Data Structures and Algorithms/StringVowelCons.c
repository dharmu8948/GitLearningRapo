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
