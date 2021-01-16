#include<stdio.h>
int main(){
	char str1[50];
	gets(str1);
	int i,flag=0,j;
	int l1=strlen(str1);
	for(i=0,j=l1-1;i<l1/2;i++,j--){
		if(str1[i]==str1[j])flag=1;
		else break;
	}
	if(flag==1)
	printf("%s is a Polindrome",str1);
	else
	printf("%s is not a Polindrome:",str1);
	
}
