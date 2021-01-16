/*
 // Data Type
  //Example 1  to print signed integer
#include<stdio.h>
#include<limits.h>
int main()
{
	int var1=INT_MIN;
	int var2=INT_MAX;
	printf("Range of signed integer is from: %d to %d",var1,var2);
	return 0;
}
================================================================================
Example 2   to print unsigned integer 
#include<stdio.h>
#include<limits.h>
int main()
{
	unsigned int var1=0;
	unsigned int var2=UINT_MAX;
	printf("Range of unsigned integer is from: %u to %u",var1,var2);// %u is used to print unsigned values
	return 0;
}
==========================================================================================
Example 3   to print short signed integer 
#include<stdio.h>
#include<limits.h>
int main()
{
	short int var1=SHRT_MIN;
	short int var2=SHRT_MAX;
	printf("Range of short signed integer is from: %d to %d",var1,var2);// %d is used to print short signed values
	return 0;
}
=============================================================================================
Example 4  to print short unsigned integer 
#include<stdio.h>
#include<limits.h>
int main()
{
    short unsigned int var1=0;//unsinged short int var1=0;
	short unsigned int var2=USHRT_MAX;
	printf("Range of short unsigned integer is from: %u to %u",var1,var2);// %u is used to print unsigned values
	return 0;
}
====================================================================================================*
#include<stdio.h>
int main()
{
	int i=1024;
	for(; i; i>>=1) //i=i>>1 right shift operator
	printf("Hello World");
	return 0;
}
========================================================================================
#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<20;i++)
	{
		switch(i)
		{
			case 0: i+=5; //there is no break after cases so it runs all stmts
			case 1: i+=2;
			case 5: i+=5;
			default : i+=4;
		}
		printf("%d ",i);  //16 21
	}
}
=================================================================================================
#include<stdio.h>
int main()
{
	int i=-5;
	while(i<=5)
	{
	if(i>=0)
	break;
	else
	{
		i++;
		continue;  //jumps to condition of while loop and again execute repeate again and again
	}
	printf("Neso");   //No output
}
}
======================================================================================================
#include<stdio.h>
int main()
{
	int i=0;
	for(printf("one\n");i<3 && printf("");i++)
	{
		printf("Hi!\n");
	}
	return 0;
}
==============================================================================================
#include<stdio.h>
int main()
{
	unsigned int i=500;
	while(i++ != 0);
	printf("%u",i);
	return 0;
}
====================================================================================================
#include<stdio.h>
int main()
{
	int x=3;
	if(x==2); x=0;  //now x is equal to 0
	if(x==3)
	x++;
	else
	x += 2;
	
	printf("x = %d",x);
	return 0;
}
==================================================================================*/
int main() 
{ 
    int arr[] = {15, 2, 4, 8, 9, 5, 10, 23}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  //  int sum = 23; 
   // subArraySum(arr, n, sum); 
   printf("%d ",n);
   printf("%d ",sizeof(arr));
   printf("%d ",sizeof(arr[0]));
    return 0; 
} 
