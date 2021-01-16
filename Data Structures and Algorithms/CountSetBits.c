#include<stdio.h>
int main(){
	int n;
	printf("Enter any Number...:   ");
	scanf("%d",&n);
	int count=0;
	if(n==0)
	printf("Number of set Bits is %d",count);
	else
	{
		while(n>0){
		if(n%2==1)
		count++;
		n = n/2;
	   }
	   printf("Number of set Bits is %d",count);
	}
	getch(); 
}
