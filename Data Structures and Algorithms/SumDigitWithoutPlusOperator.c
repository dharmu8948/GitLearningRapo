
//  this is applicable only when b is +ve number
/* 
#include<stdio.h>
int main()
{
	int a,b;
	printf("Please Enter two Numbers: ");
	scanf("%d %d",&a,&b);
	while(b!=0)
	{
		a++;
		b--;
	}
	printf("sum of the given number is %d",a);
}


*/


#include<stdio.h>
int main()
{
	int a,b;
	printf("Please Enter two Numbers: ");
	scanf("%d %d",&a,&b);
	while(b!=0)
	{
		if(b>0)
	    {
		   a++;
		   b--;
	    }
	    if(b<0)
	    {  
		   a--;
		   b++;
	    }
	}
	printf("Sum is %d",a);
}
