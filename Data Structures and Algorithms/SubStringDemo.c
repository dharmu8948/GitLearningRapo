#include<stdio.h>
int main()
{
	char str1[20],str2[6],str3[4];
	int i,j,l1,l2,k=0;
	gets(str1);
	gets(str2);
	l1=strlen(str2);
	for(i=0;str1[i]!='\0';i++)
	{
		for(j=0;str2[i]!='\0';j++)
		{
			if(str1[j]==str2[i])
			{
				str3[k]=str2[i];
				k++;
				break;
			}
		}
	}
	//printf("%d",k);
	l2=strlen(str3);
	if(l1==l2)
		printf("1");
		else
		printf("0");
	
}
