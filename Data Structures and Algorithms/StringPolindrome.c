#include<stdio.h>
#include<String.h>
int polindrome(char[]);
int main()
{
	char str[80],temp[60];
	int l,i;
	gets(str);
	l=strlen(str);
//	printf("%d\n",l);
	int count=0;
	for(i=0;i<l;i++)
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
		{
			temp[count]=str[i];
		//	printf("%c",temp[count]);
			count++;
		}
	}
//	printf("\n");
//	puts(temp);
	int a=polindrome(temp);
	if(a==1)
	printf("true");
	else
	printf("false");
}
int polindrome(char temp[])
{
	int i=0,flag=0;
	strlwr(temp);
	int h=strlen(temp);
	int l=h-1;
	while(l>0)
	{
		if(temp[i++]!=temp[l--])
		{
			
			flag++;
			break;
		}
	}
	if(flag==0)
	return 1;
	else
	return 0;
}

