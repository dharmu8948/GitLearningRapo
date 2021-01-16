

/*
#include<stdio.h>
int main()
{
	int a=5,b=3;
	printf("%d",++(a*b+1)); //  [Error]  lvalue required as increment operand(increment or decrement operator is applicable for any expression it must be a variable
}



#include<stdio.h>
int main()
{
	printf("%x",-1<<4); // apply 2's complement fff0
}


#include<stdio.h>
int main()
{
	int a=5;
	a=printf("Good")+printf("Boy"); // GoodBoy
	printf("%d",a); //4+3=7
}



#include<stdio.h>
int main()
{
	int a=5;
	a=printf("Welcome");  // Welcome
	printf("%d",a); // 7
}



#include<stdio.h>
int main()
{
	char ch='A';
	ch=ch+1;   // 65+1=66
	printf("%c",ch); // B
}



#include<stdio.h>
int main()
{
	float f=3.14;
	printf("%f",f%2); // ce:% is not valid for floating type value
}


*/
#include<stdio.h>
int main()
{
	int a,b,c;
	a=b=c=4;
	c=a==b;
	printf("%i",c);  // 1
}
