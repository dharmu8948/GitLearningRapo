//the time complexity of this is 0(n)

/*
#include<stdio.h>
int main(){
	int n;
	printf("Enter any Number:   ");
	scanf("%d",&n);
	int x=n,flag=0;
	while(n>1){
		if(n%2==0)
		  n = n/2;
		else{
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("The given Number is power of 2");
	else
	printf("The given Number is not power of 2");
}

*/
#include<stdio.h>
int main(){
	int n;
	printf("Enter any Number:   ");
	scanf("%d",&n);
	int x=n;
	if(x&&!(n&(n-1)))
	printf("The given Number %d is power of 2",x);
	else
	printf("The given Number %d is not power of 2",x);
	getch();
	
}
