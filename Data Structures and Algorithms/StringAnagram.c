#include<stdio.h>
int main(){
	char str1[20],str2[20];
	gets(str1);
	gets(str2);
	int l1 = strlen(str1);
	int l2 = strlen(str2);
//	printf("%d %d\n",l1,l2);
	int count[256],j;
	for(j=0;j<256;j++)
	count[j]=0;
	int flag=0,i;
	if(l1==l2){
		for(i=0;i<l1;i++)
		count[str1[i]]++;
		for(i=0;i<l2;i++)
		count[str2[i]]--;
		for(i=0;i<256;i++){
			if(count[i]==0){
			flag=1;
			continue;
		}
		else{
			flag=0;
			break;
		}
		}
		if(flag=1 && i==256)
	printf("Yes");
	else
	printf("No");
		
	}
	else
	printf("No");
	
}
