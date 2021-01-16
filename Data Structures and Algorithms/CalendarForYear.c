#include<stdio.h>
int main()
{
	int y,ty,ly,td,rem;
	printf("Enter any year: ");
	scanf("%d",&y);
	y>2001?(ty=y-2001):(ty=2001-y);
	ly=ty/4;
	td=ty*365+ty;
	rem=td%7;
	if(rem==0)
	printf("Monday");
	else if(rem==1)
	printf("Tuesday");
	else if(rem==2)
	printf("Wednesday");
	else if(rem==3)
	printf("Thursday");
	else if(rem==4)
	printf("Friday");
	else if(rem==5)
	printf("Saturday");
	else if(rem==6)
	printf("Sunday");
}
