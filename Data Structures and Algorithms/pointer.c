/*Example 1
#include<stdio.h>
int main()
{
	int x=5;
	int *y=&x;
	printf("%d\n",x);
		printf("%d\n",&x);
			printf("%d\n",y);
				printf("%d\n",*y);
					printf("%d\n",&y);
		
}
============================================================================================
//Example 2
#include<stdio.h>
int main()
{
	int a;
	int *p;
	a=10;
	p=a;
	p=&a;
//	printf("%d\n",p);  //normal p canant hold address of any variable
	printf("%d\n",*p); //*p hold value at address pointed by p
	printf("%d\n",&a); //address of a
	printf("%d\n",a); // value of a i,e 10
	int b=20;
	*p=b;
	printf("%d\n",*p); //20
	printf("%d\n",p);
}
=====================================================================================================
//Example 3 
#include<stdio.h>
int main()
{
	int a;
	int *p;
	a=10;
	p=&a;
	printf("a=%d\n",a);
	*p=12;
	printf("a=%d\n",a);
}
====================================================================================================
//Exapmle 3
#include<stdio.h>
int main()
{
	int a;
	int *p;
	a=10;
	p=&a;
	printf("Address of p is %d\n",p);
	printf("Value at p is %d\n",*p);
	int b=20;
//	*p=b;//will address in p changes to point b ???===Answer==No
	*p=12; //only value can be modified
	printf("Address of p is %d\n",p);
	printf("Value at p is %d\n",*p);
}
=============================================================================================================*/
//Exapmle 4
#include<stdio.h>
int main()
{
	int l;
	int *P;
	l=10;
	P=&l;
	//Pointer Arithmetic
	printf("Adderess of p is %d\n",P);
	printf("Value of l is %d\n",l);
	printf("Value of *P is %d\n",*P);
	printf("Size of integer is %d bytes\n",sizeof(int));
	printf("Address of p+1 is %d\n",P+2);
	}
