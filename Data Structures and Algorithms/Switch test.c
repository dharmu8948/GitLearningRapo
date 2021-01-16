#include<stdio.h>

int main()
{
int a, b, c, choice;
printf("\nEnter two numbers");
scanf("%d %d",&a, &b);
printf("\n MENU");
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
}
==============================================================================================
