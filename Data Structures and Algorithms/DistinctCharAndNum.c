#include<stdio.h>
int main()
{
	int i,j;
	char str[20];
	printf("Enter Mixture of string and numbers: ");
	gets(str);
	int l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
			printf("%c",str[i]);
	}
	printf("\n");
	for(i=0;i<l;i++)
	{
				if(str[i]=='0')
				printf("0");
				if(str[i]=='1')
				printf("1");
				if(str[i]=='2')
				printf("2");
				if(str[i]=='3')
				printf("3");
				if(str[i]=='4')
				printf("4");
				if(str[i]=='5')
				printf("5");
				if(str[i]=='6')
				printf("6");
				if(str[i]=='7')
				printf("7");
				if(str[i]=='8')
				printf("8");
				if(str[i]=='9')
				printf("9");
	}
	printf("\n");
}
