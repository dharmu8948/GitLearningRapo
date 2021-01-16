#include<stdio.h>
int main()
{
	int yy,sum=0,mm,odd,remain;
	printf("Enter any Year: ");
	scanf("%d",&yy);
	yy=yy-1;
	if(yy>=2000)
	{
		int rem1=yy%2000;
		int rem2=(rem1/4);
		int rem3=rem1-rem2;
		rem2=rem2*2;
		sum=(sum+rem2+rem3)%7;
		printf("total odd day %d\n",sum);
	}
	else
	{
		int rem1=yy%400;
		int rem2=(rem1/4);
		int rem3=rem1-rem2;
		rem2=rem2*2;
		sum=(sum+rem2+rem3)%7;
		printf("total odd day %d\n",sum);
	}
	printf("Enter any month: ");
	scanf("%d",&mm);
	mm=mm+1;
	printf("%d ",mm);
	while(odd==0)
	{
		switch(mm)
	{
		case 1:
			odd+=3;
		case 2:
			odd+=0;
		case 3:
			odd+=3;
		case 4:
			odd+=2;
		case 5:
			odd+=3;
		case 6:
			odd+=2;
		case 7:
			odd+=3;
		case 8:
			odd+=3;
		case 9:
			odd+=2;
		case 10:
			odd+=3;
		case 11:
			odd+=2;
		case 12:
			odd+=3;
			printf("%d\n",mm);
			break;
		default:
			printf("Invalid Entry!!");
	}
}
	remain=odd%7;
	printf("Odd day in Month: %d\n",remain);
	int dd;
	printf("Enter the date: ");
	scanf("%d",&dd);
	if(dd>0 && dd<32)
	{
		int remdd=dd%7;
		printf("Odd day till date: %d",remdd);
	}
	else
	printf("Plz. Enter valid date!!");
}
