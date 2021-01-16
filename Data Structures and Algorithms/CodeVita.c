#include<stdio.h>
#include<String.h>
int main()
{
	char str[100];
	int i,P,Q,N,count=0,j,k;
	int A[5];
	printf("Enter The String : ");
	scanf("%s",&str);
	P=strlen(str);
	scanf("%d",&Q);
	for(i=0;i<=Q;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<Q;i++){
		for(j=0;j<A[i];i++)
		{
			if(str[i]==str[A[i]]){
			for(k=0;k<A[i];k++)
			{
				if(str[k]==str[A[i]])
				count++;
			}
		}
		}
		printf("%d",count);
	}
	printf("%d\n",P);
	printf("%d",count);
}
