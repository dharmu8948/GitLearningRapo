//Example 1
/*
#include<stdio.h>
#include<conio.h>
main()
{
int a=5, b,c,d;
d=a++;
b=++d;
c=b++;
printf("\n %d %d %d %d",a,b,c,d);
getch();
}
===================================================================================
#include<stdio.h>
#include<conio.h>
main()
{
int a=6, b,c,d;
b=a--;
c=--b;
d=c--;
printf("\n %d %d %d %d",a,b,c,d);
getch();
}
======================================================================================
#include<stdio.h>
#include<conio.h>
main()
{
int a=6, b,c,d;
b=a++;
c=--b;
d=c++;
a=--d;
b=--c;
printf("\n %d %d %d %d",a,b,c,d);
getch();
}
=========================================================================================
#include<stdio.h>
main()
{ 
int a=5,b,c,d;
b=--a;
d=b++;
c=a++;
b=c--;
a=--d;
printf("\n %d %d %d %d",a,b,c,d);
getch();
}
================================================================================================
#include<stdio.h>
main()
{ int a=5,b,c,d;
//clrscr();
b=--a;
c=b++;
d=c--;
printf("\n %d %d %d %d",a++,--b,c++,d--); //4 4 3 4
printf("\n %d %d %d %d",a,b,c,d);        //5 4 4 3
getch();
}
=======================================================================================
#include<stdio.h>
#include<conio.h>
main()
{
//clrscr();
printf("\n %d", sizeof(char) );  // 1
printf("\n %d", sizeof(float));  //4
printf("\n %d", sizeof(double)); //8
printf("\n %d", sizeof(long double));  //12
printf("\n %d", sizeof(short int));  //2
printf("\n %d", sizeof(int));        //4
printf("\n %d", sizeof(long int));  // 4
getch();
}
===================================================================================
#include<stdio.h>
main()
{
int a=32780;
short int b;
b=( short int)a;//32780
printf("%d\n",a);  //-32756
printf("%d",b);
}
============================================================================================
//Recommended code:
//short int +short int = int
//int + int = long int
//int + float = float
//float + float = double
//long int + long int = string
//Program to find greater of two numbers;
#include<stdio.h>
main()
{
int a, b;
printf("\n Enter two numbers");
scanf("%d %d",&a,&b);
if(a>b)
{
printf("\n greater number %d",a);
} else
{
printf("\n greater number %d",b);
}
getch();
}
================================================================================
#include<stdio.h>
#include<conio.h>
main()
{
int a,b,big;
printf("\nEnter two numbers ");
scanf("%d %d",&a,&b);
big = (a>b) ? a:b;
printf("\ngreater = %d",big);
getch();
}
===========================================================================================
//Program to check for equal and greater.
#include<stdio.h>
#include<conio.h>
main()
{
int a,b;
printf("\nEnter two numbers ");
scanf("%d %d",&a,&b);
if(a==b)
{
printf("\n both are equal");
} else if (
a>b)
{
printf("\n greater = %d",a);
} else
{
printf("\n greater = %d",b);
}
getch();
}
========================================================================================
//Program to find grater of three numbers.
#include<stdio.h>
main()
{
int a,b,c;
printf("\n Enter three numbers");
scanf("%d %d %d",&a,&b, &c);
if(a>b)
{
if(a>c)
{
printf("\n greater number %d",a);
} else
{
printf("\n greater number %d",c);
}
} else if(b>c)
{
printf("\n greater number %d",b);
} else
{
printf("\n greater number %d",c);
}
getch();
}
===============================================================================================
#include<stdio.h>
#include<conio.h>
main()
{ int a,b,c,big;
printf("\nEnter three numbers ");
scanf("%d %d %d",&a,&b,&c);
big=a;
if(b>big)
{
big=b;
}
if(c>big)
{
big = c;
}
printf("\ngreater =%d",big);
getch();
}
================================================================================================
#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,big;
printf("\nEnter three numbers ");
scanf("%d %d %d",&a,&b,&c);
big=(a>b) ? ( a>c?a:c ) : ( b>c?b:c );
printf("\ngreater = %d",big);
getch();
}
======================================================================================================
//Program to find result of student:
#include<stdio.h>
#include<conio.h>
main()
{
int m1,m2,m3;
printf("\n Enter three subjects marks");
scanf("%d %d %d",&m1,&m2, &m3);
if(m1>=40)
{
if(m2>=40)
{
if(m3>=40)
{
printf("\n PASS");
} else
{
printf("\n FAIL");
}
} else
{
printf("\n FAIL");
}
} else
{
printf("\n FAIL");
}
getch();
}
=================================Another way: ====================================================
#include<stdio.h>
#include<conio.h>
main()
{
int m1,m2,m3;
printf("\n Enter three subjects marks");
scanf("%d %d %d",&m1,&m2, &m3);
if(m1>=40 && m2>=40 && m3>=40 )
{
printf("\n PASS");
} else
{
printf("\n FAIL");
}
getch();
} 
===================================Another way:================================================= 
#include<stdio.h>
#include<conio.h>
main()
{
int m1,m2,m3;
printf("\n Enter three subjects marks");
scanf("%d %d %d",&m1,&m2, &m3);
if(m1<40)
{
printf("\n FAIL");
} else if(m2<40)
{
printf("\n FAIL");
} else if(m3<40)
{
printf("\n FAIL");
} else
{
printf("\n PASS");
}
getch();
}
============================================Another way:========================================
#include<stdio.h>
#include<conio.h>
main()
{
int m1,m2,m3;
printf("\n Enter three subjects marks");
scanf("%d %d %d",&m1,&m2, &m3);
if(m1<40 || m2<40 || m3<40 )
{
printf("\n FAIL");
}
else
{
printf("\n PASS");
}
getch();
}
<<<<<<<<<<<<<<<<<<<<<<<<<<<<Program to find the grade of the students:>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
main()
{
int m1,m2,m3,avg;
printf("\n Enter three subjects marks");
scanf("%d %d %d",&m1,&m2, &m3);
if(m1>=40 && m2>=40 && m3>=40 )
{
printf("\n PASS");
avg = (m1+m2+m3)/3;
if(avg>=70)
{
printf("\n Grade A with Distinction");
} else if(avg>=60)
{
printf("\n Grade A");
} else if(avg>=50)
{
printf("\n Grade B");
} else
{
printf("\n Grade C");
}
} else
{
printf("\n FAIL and NO Grade");
}
getch();
}
==========================================================================================================
//Program to check result of the student, out of four subject at least 3 subjects are greater than
//or equal to 40, then pass.
//i.e one subject is optional.
#include<stdio.h>
#include<conio.h>
main()
{ int m1,m2,m3,m4, counter=0;
printf("\n Enter four subjects marks");
scanf("%d %d %d %d",&m1,&m2,&m3,&m4);
if(m1>=40)
{
counter++;
}
if(m2>=40)
{
counter++;
}
if(m3>=40)
{
counter++;
}
if(m4>=40)
{
counter++;
}
if(counter >= 3)
{
printf("\nPASS");
} else
{
printf("\nFAIL");
}
getch();
}
==================================================================================================
//Program to display the comments on score of the cricket bats man:
#include<stdio.h>
#include<conio.h>
main()
{
int score;
printf("\n Enter the score");
scanf("%d",&score);
if(score<0)
{
printf("\n Invalid input");
} 
else if(score==0)
{
printf("\n Duck out");
}
 else if( score <50 )
{
printf("\n Normal score");
} 
else if( score <100 )
{
printf("\n Half Century");
} 
else
{
printf("\n Century");
}
getch();
}
================================================================================================
//<<<<<<<<<<<<<<<<<<<<<Program to check type of char:>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
char ch;
printf("\n Enter a character");
scanf("%c",&ch);
if( isalpha(ch) )
{
printf("\n alphabet");
} else if( isdigit(ch) )
{
printf("\n digit");
} else if( isspace(ch) )
{
printf("\n space or tab or newline char");
} else
{
printf("\n special char");
}
getch();
}
===================================================================================================
//<<<<<<<<<<<<<<<<<<<<<<<<<,Program to convert the character:>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
char ch;
printf("\nEnter a character");
scanf("%c",&ch);
if( isupper(ch) )
{
printf("\n upper case it's lower case %c", tolower(ch) );
} else if( islower(ch) )
{
printf("\n lower case it's upper case %c", toupper(ch) ) ;
} else
{
printf("\n not an alphabet");
}
getch();
}
======================================================================================================
//<<<<<<<<<<<<<<<<<<<<<<<Checking with ASCII values:>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//A - Z ==> 65 to 90
//a - z =>// 97 to 122
//0 -9 ==> 48 to 57
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
char ch;
printf("\nEnter a character");
scanf("%c",&ch);
if( (ch>=65 && ch <=90) || ( ch>=97 && ch<=122) )
{
printf("\n alphabet");
} 
else if(ch>=48 && ch<=57)
{
printf("\n Digit");
}
 else if(ch==' '|| ch=='\t' || ch=='\n')
{
printf("\n space or tab or newline char");
} 
else
{
printf("\n Special char");
}
getch();
}
==================================================================================================
//<<<<<<<<<<<<<<<<<<<<<<<<<Program to covert the case of an alphabet.>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
char ch;
printf("\nEnter a character");
scanf("%c",&ch);
if( ch>=65 && ch <=90)
{
printf("\n upper case alphabet and lower case = %c",(ch+32));
} else if( ch>=97 && ch<=122)
{
printf("\n lower case alphabet and upper case = %c",(ch-32));
} else
{
printf("\n Not an alphabet");
}
getch();
}
==================================================================================================
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<example to understand getch()>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
main()
{
printf("\nONE");
getch();
printf("\nTWO ");
//getch();
printf("\nTHREE ");
getch();
}
====================================================================================================
//<<<<<<<<<<<<<<<<<<<<<<What is o/p of the following:>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
main()
{
int a=30,b=20;
if(a>b)
a=40;
else
a= 60;
b=70;
printf("\n%d %d",a,b);
getch();
}
//  O/p: 40 70
=====================================================================================================
//<<<<<<<<<<<<<<<<Switch case statement is used to develop the menu based applications.>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
main()
{
int num;
//clrscr();
printf("\nEnter a number");
scanf("%d",&num);
switch(num)
{
case 1 :
printf("\n ONE");
break;
case 2 :
printf("\n TWO");
break;
case 3 :
printf("\n THREE");
break;
case 4 :
printf("\n FOUR");
break;
default :
printf("\n DEFAULT");
break; // optional 
}
printf("\n END");
getch();
}
===========================================================================================================
#include<stdio.h>
#include<conio.h>
main()
{
int a, b, c, choice;
printf("\nEnter two numbers");
scanf("%d %d",&a, &b);
printf("\n MENU :");
printf("\n 1.Addition");
printf("\n 2.Subtraction");
printf("\n 3.Multiplication");
printf("\n Enter your choice 1/2/3 ");
scanf("%d",&choice);
switch(choice)
{
case 1 :
printf("\n Addition %d",(a+b));
break;
case 2 :
printf("\n Subtraction %d",(a-b));
break;
case 3 :
printf("\n Multiplication %d",(a*b));
break;
default :
printf("\n Wrong Choice");
break;
}
getch();
}
===================================================================================================
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<WHILE LOOP>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<program to display numbers 1 to 10>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
main()
{
int i=1;
while(i<=10)
{
printf("\n %d ",i);
i++;
}
getch();
}
=================================================================================================
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<DO WHILE LOOP>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<Program to display 1 to 10 numbers.>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
main()
{
int i=1;
do
{
printf("\n%d",i);
i++;
}
while(i<=10);
getch();
}
========================================================================================================
//<<<<<<<<<<<<<<<<<<<<<<<<<<program to display 1 to num>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
main()
{
int i=1,num;
printf("\n Enter the limit" );
scanf("%d",&num);
while(i<=num)
{
printf("\n %d ",i);
i++;
}
getch();
}
====================================================================================================
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<Program to print even number from 1 to n.>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
main()
{
int i=1,n;
//clrscr();
printf("\nEnter the limit");
scanf("%d",&n);
while(i<=n)
{
if(i%2==0)
{
printf("%d ",i);
}
i++;
}
getch();
}
=============================================================================================
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<Sum of the numbers 1 to n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
main()
{
int i=1,n,sum=0;
printf("\n Enter the limit");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i++;
}
printf("\n Sum : %d",sum);
getch();
}
========================================================================================
//<<<<<<<<<<<<<<<<Program to sum of even numbers and odd numbers separately>>>>>>>>>>>>
#include<stdio.h>
int main()
{
	int n,i=1,se=0,so=0;
	printf("Enter The Limit :");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			se=se+i;
		//	i++;
		}
		else
		{
			so=so+i;
		//	i++;
		}
		i++;
	}
	printf("Sum of Even Numbers= %d ,Sum of Odd Numbers =%d",se,so);
}
==================================================================================================
//<<<<<<<<<<<<<<<<<<<<<<,Program to find the factorial of a given number.>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
main()
{
int n;
long int fact=1;
printf("\nEnter a number ");
scanf("%d",&n);
while(n>=1)
{
fact=fact*n;
n--;
}
printf("\nfactorial = %ld",fact);
getch();
}
=========================================================================================================
//><<<<<<<<<<<<<<<<<<<<<<<<<Program to find sum of digits of a given number;>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<3456 = 18>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
main()
{
int n,r,sum=0;
printf("\n Enter a Number");
scanf("%d",&n);
while(n>0)
{
r=n%10;
sum=sum+r;
n=n/10;
}
printf("\n Sum of digits %d",sum);
getch();
}
======================================================================================================
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<Program to make the reverse of a given number>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<2567 = 7652>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
main()
{
int n,r,rev=0;
printf("\n Enter a Number");
scanf("%d",&n);
while(n>0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
printf("\n Reverse %d",rev);
getch();
}
=====================================================================================================
//<<<<<<<<<<<<<<<<<<<<<<<<<Program to check the given number is palindrome or not>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<1221 = 1221>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
main()
{
int n,r,rev=0,temp;
printf("\n Enter a Number");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
} if(rev==temp)
{
printf("\n Palindrome");
} else
{
printf("\n Not a palindrome");
}
getch();
}
==============================================================================================
//<<<<<<<<<<<<<<<<<Program to find sum of first digit and last digit.>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
main()
{
int n,r1,r2;
//clrscr();
printf("\nEnter a number");
scanf("%d",&n);
r1=n%10;
while(n>0)
{
r2=n%10;
n=n/10;
}
printf("\nsum = %d",(r1+r2));
getch();
}
=========================================================================================================
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<Program to print following Fibonacci series>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<1 1 2 3 5 8 13 21 34…………………n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
main()
{
int f1=0,f2=0,sum=1,n;
//clrscr();
printf("\nEnter the limit");
scanf("%d",&n);
while(sum<=n)
{
printf("%d ",sum);
f1=f2;
f2=sum;
sum=f1+f2;
}
getch();
}
=====================================================================================================
//<<<<<<<<<<<<<<<<<<<<<<<<Program to check given number is prime or not using exit(0)>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{ int num,i=2;
//clrscr();
printf("\nEnter a number");
scanf("%d",&num);
while(i<num)
{
if(num%i==0)
{
printf("\nNot a Prime");
exit(0);
} i++;
}
printf("\nIt is a prime");
getch();
}
=========================================================================================================
//<<<<<<<<<<<<<<<<Program to check given number is prime or not using break.>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{ int num,i=2,flag=0;
//clrscr();
printf("\nEnter a number");
scanf("%d",&num);
while(i<num)
{
if(num%i==0)
{
flag=1;
printf("\nNot a prime");
break;
} 
i++;
} if(flag==0)
{
printf("\nIt is a prime");
}
getch();
}
=====================================================================================================
//<<<<<<<<<<<<<<<<<<<<<<<<Program to check given number is octal number or not>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<      156      >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
int n,r;
printf("\n Enter a Number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
if(r>7)
{
printf("\n Not a octal number");
exit(0);
}
n=n/10;
}
printf("\n octal number");
getch();
}
=====================================================================================================
//<<<<<<<<<<<<<<<<<<<<<<< checking octal number Using break; >>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
int n,r,flag=0;
printf("\n Enter a Number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
if(r>7)
{
flag=1;
printf("\n Not a octal number");
break;
}
n=n/10;
}
if(flag==0)
{
printf("\n octal number");
}
getch();
}
========================================================================================================
//<<<<<<<<<<<<<<<<<<<<<Program to print even numbers using continue statement :>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
main()
{
 int i=1;
while(i<=10)
{
if(i%2!=0)
{
i++;
continue;
}
printf("%d ",i);
i++;
}
getch();
}
=====================================================================================================
//<<<<<<<<<<<<<<<<<Program to display mathematical tables from 1 to 20>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
main()
{ int i,j;
//clrscr();
for(i=1;i<=10;i++)
{
printf("\n=================\n");
for(j=1;j<=10;j++)
{
printf("\n%d * %d = %d",i,j,(i*j));
}
}
getch();
}
================================================================================================
//<<<<<<<<<<<<<<<<<<<<<<Program to find prime numbers from 1 to n.>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
main()
{ int i,j,n,flag;
//clrscr();
printf("\nEnter the limit ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
flag=0;
for(j=2;j<i;j++)
{
if(i%j==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d ",i);
}
}
getch();
}
=======================================================================================================
//<<<<<<<<<<<<<<<<<Program to find twin prime number from 1 to n.>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<Twin prime mean, the difference between two consecutive prime numbers must be 2.>>>>>>>>>>
///////////////                 Eg:
///////////////////////<<<<<<<<<<   3 5, 5 7, 11 13, 17 19
#include<stdio.h>
main()
{
int n,i,j,flag,p1=1,p2;
//clrscr();
printf("\nEnter the limit");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
flag=0;
for(j=2;j<i;j++)
{
if(i%j==0)
{
flag=1;
break;
}
}
if(flag==0)
{
p2=i;
}
if((p2-p1)==2)
{
printf("\n %d %d",p1,p2);
}
p1=p2;
}
getch();
}
================================================================================================
#include<stdio.h>
int main()
{
	int n,i,fact,sum=0,r;
	printf("Enter A Number :");
	scanf("%d",&n);
	int k=n;
	while(n>0)
	{
		r=n%10;
		for(fact=1;r>0;r--)
		{
			fact=fact*r;
		}
	//	printf("%d\n",fact);
		sum=sum+fact;
		n=n/10;
	}
	if(k==sum)
	printf("Strog Number ");
	else
	printf("Not a Strog Number :");
}
=====================================================================================================
//<<<<<<<<<<<<<<<<<<<<<<<Program to find strong number from 1 to n.>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>..
#include<stdio.h>
#include<conio.h>
main()
{
int num,r,i,n,sum,fact;
printf("\nEnter the limit");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
num=i;
sum=0;
while(num>0)
{
r=num%10;
for(fact=1;r>=1;r--)
{
fact = fact * r ;
}
sum=sum+fact;
num=num/10;
}
if(sum==i)
{
printf("%d ",i);
}
}
getch();
=====================================================================================================
//<<<<<<<<<<<<Program to check given number is arm strong number or not>>>>>>>>>>>>>>>>.
//<<<<<<<<<<<<<<<<,Sum of cubes of digits a number should be same as that number.>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<Eg:
//                        153
//                         1^3 + 5^3 + 3^3 = 153
#include<stdio.h>
#include<conio.h>
main()
{ int n,r,sum=0,fact,temp;
//clrscr();
printf("\nEnter a number");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=sum+r*r*r;
n=n/10;
} if(sum==temp)
{
printf("\nArm Strog Number");
} else
{
printf("\n Not a Arm strong number");
}
getch();
}
====================================================================================================
//<<<<<<<<<<<<<<<<<Program to check arm strong numbers from 1 to n.>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
main()
{
int num,r,i,n,sum;
//clrscr();
printf("\nEnter the limit");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
num=i;
sum=0;
while(num>0)
{
r=num%10;
sum=sum+r*r*r;
num=num/10;
}
if(sum==i)
{
printf("%d ",i);
}
}
getch();
}
=========================================================================================================
//Program to display following Floyd triangle
    //1
    //1 2
    //1 2 3
    //1 2 3 4
    //1 2 3 4 5
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
======================================================================================================
//<<<<<<<<<<<<<<<<<<<<<<<Program to display following Floyd triangle
            //1
            //2 2
            //3 3 3
           //4 4 4 4
           //5 5 5 5 5
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter then Limits :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
======================================================================================================
//Program to display following triangle
//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1
#include<stdio.h>
#include<conio.h>
main()
{ 
int i,j,n;
printf("Enter the Limit :");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
	for(j=1;j<=i;j++)
	{
		printf("%d ",j);
	}
	printf("\n");
}
}
========================================================================================================
//Program to display following triangle
//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15
#include<stdio.h>
int main()
{
	int i,j,n,num=1;
	printf("Enter the Limit :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}
======================================================================================================
#include<stdio.h>
main()
{
int i,j,n;
//clrscr();
printf("\nEnter the limit ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n");
for(j=1;j<=i;j++)
{
printf("%d ",j);
}
}
for(i=i-2;i>=1;i--)
{
printf("\n");
for(j=1;j<=i;j++)
{
printf("%d ",j);
}
}
getch();
}
====================================================================================================
//Program to display following triangle
//1
//1 2 1
//1 2 3 2 1
//1 2 3 4 3 2 1
//1 2 3 4 5 4 3 2 1
//1 2 3 4 3 2 1
//1 2 3 2 1
//1 2 1
//1
#include<stdio.h>
#include<conio.h>
main()
{
int i,j,n;
//clrscr();
printf("\n Enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n");
for(j=n;j>i;j--)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("%d ",j);
}
for(j=i-1;j>=1;j--)
{
printf("%d ",j);
}
}
for(i=i-2;i>=1;i--)
{
printf("\n");
for(j=n;j>i;j--)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("%d ",j);
}
for(j=i-1;j>=1;j--)
{
printf("%d ",j);
}
}
getch();
}
=====================================================================================================
#include<stdio.h>
#include<conio.h>
main()
{
int i,j;
for(i=5;i>=1;i--)
{
printf("\n");
for(j=1;j<=i;j++)
{
printf("%d ",j);
}
for(j=5;j>i;j--)
{
printf(" ");
}
for(j=5;j>i;j--)
{
if(j==5)
{
continue;
}
printf(" ");
}
for(j=i;j>=1;j--)
{
if(j==5)
{
continue;
}
printf("%d ",j);
}
}
for(i=i+2;i<=5;i++)
{
printf("\n");
for(j=1;j<=i;j++)
{
printf("%d ",j);
}
for(j=5;j>i;j--)
{
printf(" ");
}
for(j=5;j>i;j--)
{
if(j==5)
{
continue;
}
printf(" ");
}
for(j=i;j>=1;j--)
{
if(j==5)
{
continue;
}
printf("%d ",j);
}
}
getch();
}
===============================================================================================
//<<<<<<<<<<<<<<<<<Program to read and display array elements:>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{ int a[50];
int n,i;
printf("\nEnter how many elements");
scanf("%d",&n);
if(n<1 || n>50)
{
printf("\n Invalid no of elements");
exit(0);
}
printf("\nEnter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nElements are  :  ");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
getch();
}
======================================================================================================
//<<<<<<<<<<<<<<<<Program to find sum of the elements in the array>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{ int a[50];
int n,i,sum=0;
//clrscr();
printf("\nEnter how many elements");
scanf("%d",&n);
if(n<1 || n>50)
{
printf("\n Invalid no of elements");
exit(0);
}
printf("\nEnter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("\n sum = %d",sum);
getch();
}
=======================================================================================================
//<<<<<<<<<<<<<<<<Program to find min and max of elements in array:
#include<stdio.h>
#include<conio.h>
main()
{ int a[50];
int n,i,max,min;
printf("\nEnter how many elements");
scanf("%d",&n);
if(n<1 || n>50)
{
printf("\n Invalid no of elements");
exit(0);
}
printf("\nEnter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
max=a[i];
if(a[i]<min)
min=a[i];
}
printf("\n max = %d and min = %d",max, min);
getch();
}
========================================================================================================
//<<<<<<<<<<<<<<<<<<<          1. Linear search:             >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<It is a searching for the element from the first element to last element.>>>>>>>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int a[50];//={1,3,8,18,13,15,11,25,14,27,23,30,19,8,50};
int i,flag=0,num,n;
printf("Enter The Number of Elements :");
scanf("%d",&n);
printf("Enter The Elements :");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("\n Enter the number u want to search");
scanf("%d",&num);
//flag=0;
for(i=0; i<n;i++)
{
if(num==a[i])
{
printf("\n your number found at location a[%d]",i);
flag=1;
break;
}
}
if(flag==0)
{
printf("\n Your number not found");
}
getch();
}
==============================================================================================
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<              Program for binary search:             >>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
main()
{
int a[30];//={1,3,5,10,18,20,26,31,36,40,43,57,58,60,66,73,78,80};
int num, i, l=0,h,m,n;
printf("Enter The Number of Elements :");
scanf("%d",&n);
printf("Enter The Elements :");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
h=n;
printf("\nEnter the number you want to search");
scanf("%d",&num);
while(l<=h)
{
m=(l+h)/2;
if(num==a[m])
{
printf("\nFound at a[%d]",m);
break;
} if(num>a[m])
{
l=m+1;
} else
{
h=m-1;
} if(l>h)
{
printf("\nnumber is not found");
break;
}
}
getch();
}
===========================================================================================
//<<<<<<<<<<<<<,             Bubble Sort            >>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
int main()
{
	int a[50],n,i,j,temp;
	printf("How Many Elements  :");
	scanf("%d",&n);
	printf("Enter The Elements :");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
	printf("Number Before Sorting :");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	//bubble sort
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Numbers After Sorting : ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
=============================================================================================
#include<stdio.h>
int main()
{
	int a=2;
	printf("size of a is %d,",sizeof(++a)); \//increment/decrement oprator is not effective in sizeof operator
	printf("value of a is %d",a);
}
=======================================================================================================
//<<<<<<<<<<<<<<<<<<<<                 Insertion sorting :               >>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
main()
{
int a[50];
int i,j,n,temp;
printf("\nHow many elements");
scanf("%d",&n);
printf("\nEnter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nbefore sorting elements are");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
//insertion sorting
for(i=0; i<n-1; i++)
{
for(j=i+1; j<n; j++)
{
if(a[i]>a[j])
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
}
printf("\nAfter sorting elements are ");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
getch();
}
==========================================================================================================
//<<<<<<<<<<<                 Program to read and display m * n matrix         >>>>>>>>>>>>>>>>>>>>>>>..
#include<stdio.h>
#include<conio.h>
main()
{
int a[10][10];
int r,c,i,j;
//clrscr();
printf("\nEnter how rows and cols");
scanf("%d %d",&r,&c);
printf("\nEnter the matrix elements");
for(i=0; i<r ; i++)
{
for(j=0; j<c; j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nMatrix Elements ");
for(i=0; i<r; i++)
{
printf("\n");
for(j=0; j<c; j++)
{
printf("%d\t",a[i][j]);
}
}
getch();
}
=====================================================================================================
//<<<<<<<<<<<                  Program to add matrices :                   >>>>>>>>>>>>>>>>>>>>....
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
int a[10][10],b[10][10],c[10][10];
int ar,ac,br,bc,i,j;
//clrscr();
printf("\nEnter how many rows and cols of Matrix A ");
scanf("%d %d",&ar,&ac);
printf("\nEnter how many rows and cols of Matrix B");
scanf("%d %d",&br,&bc);
if(ar!=br || ac!=bc)
{
printf("Invalid Addition");
exit(0);
}
printf("\nEnter the elements of Matrix A");
for(i=0; i<ar ; i++)
{
for(j=0; j<ac; j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nEnter the elements of Matrix B");
for(i=0; i<br; i++)
{
for(j=0; j<bc; j++)
{
scanf("%d",&b[i][j]);
}
}
// addition 
for(i=0; i<ar; i++)
{
for(j=0; j<ac; j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("\nAddition ");
for(i=0; i<ar; i++)
{
printf("\n");
for(j=0; j<ac; j++)
{
printf("%d\t",c[i][j]);
}
}
getch();
}
=====================================================================================================
//<<<<<<<<<<<               program to read and display a string.             >>>>>>>>>>>>>>>
#include<stdio.h>
#include<conio.h>
main()
{ char str1[30],str2[30];
//clrscr();
printf("\nenter two strings");
scanf("%s %s",str1,str2);
printf("\n%s %s",str1,str2);
getch();
}
===============================================================================================
//program to display following out put
//h
//h e
//h e l
//h e l l
//h e l l o
#include<stdio.h>
main()
{
char str[50];
int n,d;
printf("\nEnter string1 : ");
scanf("%s",str);
n=strlen(str);
for(d=1;d<=n;d++)
{
printf("%*.*s\n",n,d,str);
}
getch();
}
======================================================================================================*/

