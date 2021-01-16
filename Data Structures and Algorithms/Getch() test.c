//program to understand use of getch()
/* #include<stdio.h>
int main()
{
    printf("\n ONE");
    getch();
    printf("\n TWO");
    getch();
    printf("\n THREE");
    getch();
}
======================================================================*/
#include<stdio.h>
int main()
{
int a=30,b=20;
if(a>b)
a=40;
else
a= 60;
b=70;
printf("\n %d %d",a,b);
 getch();
}
/*===============================================================================================
#include<stdio.h>
main()
{
int num;
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
*/
