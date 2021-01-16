//<<<<<<<<<<<<<<<<Declare and initialization of a pointer>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>.
/*
#include<stdio.h>
int main()
{
	int x=5;
	int *ptr;  //is equivalent to ==>> int x=5,*ptr=&x;
	ptr=&x;
	printf("%d\n",x);
	printf("%d\n",&x);
	printf("%d\n",ptr);
	printf("%d\n",*ptr);
	printf("%d",&ptr);
}
====================================================================================================
//<<<<<<<<<<<<<<<<<<<<<<<<<  valueof operator  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
int main()
{
	int x=5;
	int *ptr;  //using which we can access the value of x
	ptr=&x;
	printf("%d\n",*ptr);
	//we can also modify the value of x using pointer as follows..
	*ptr=10;
	printf("%d\n",*ptr);
	printf("%d\n",x);
}
==============================================================================================================
// =============>>>>>>>>>>> Never apply the indirection operator to the unintialized pointer
//Example
int *ptr; //not initialize    
printf("%d",*ptr);  it is totally illegal without initializing we can't print
also we can't do this ..
int *ptr;
*ptr=1;  //assigning value to an unintialized pointer is dangerous
===============================================================================================
//<<<<<<<<<<<<<<<<<<<<            Pointer Assignment               >>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
int main()
{
	int i=10;
	int*p,*q;
	p=&i;
	q=p;   //q=p is not same as *q=*p
	printf("%d %d %d",i,*p,*q);
}
=============================================================================================================
//<<<<<<<<<<<<<<<<<<<<            Pointer Assignment               >>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
int main()
{
	int i=10,j=20;
	int*p,*q;
	p=&i;
	q=&j;   //q=p is not same as *q=*p
	printf("%d %d %d %d\n",i,j,*p,*q);
	*q=*p;
	printf("%d %d %d %d",i,j,*p,*q);
}
=============================================================================================================
#include<stdio.h>
int main()
{
	int i=1;
	int *p=&i,*q;
	q=p;
	*q=5;
	printf("%d",*p);
}
===========================================================================================================
//   <<<<<<<<<<<<<<<<<<< Application of pointer               >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
int main()
{
	int a[]={23,45,6,98};
	int min,max,i;
	min=max=a[0];
	for(i=1;i<4;i++)
	{
		if(a[i]<min)
		min=a[i];
		else
		max=a[i];
	}
	printf("Minimum Element is %d and Maximum Element is %d",min,max);
}  
======================================================================================================================
///<<<<<<<<<<<<<<<<, using pointer             >>>>>>>>>>>>>>>>>>>>>>...
#include<stdio.h> 
void MinMax(int arr[],int len,int *min,int *max)
{
	*min=*max=arr[0];
	int i;
	for(i=1;i<len;i++)
	{
		if(arr[i] > *max)
		*max = arr[i];
		if(arr[i] < *min)
		*min = arr[i];
		
	}
}
int main()
{
	int a[]={23,4,21,98,987,45,32,10,123,986,50,3,4,5};
	int min,max;
	int len=sizeof(a)/sizeof(a[0]);
	MinMax(a,len,&min,&max);
	printf("Minimum Element is %d and Maximum Element is %d",min,max);
}


==================================================================================================================
//  <<<<<<<<<<<<<<<<<<<<<<,             pointer pre-increment and post-increment      >>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
int main()
{
	int a[]={5,16,7,89,45,32,23,10};
	int *p=&a[0];
	printf("%d\n",p);
	printf("%d\n",*p);
	//post-increment
	printf("%d\n",*(p++));  //first it print 5 and then increases
	printf("%d\n",*(p++));    //first it print 16 and then increases
	printf("%d\n",*(p++));       //first it print 7 and then increases
	//pre-increment
	printf("%d\n",*(++p));   //first increment then print 45
	printf("%d\n",*(++p));    //first increment then print 32
	printf("%d\n",*(++p));     //first increment then print 23
	return 0;
}

=========================================================================================================================*/

//  <<<<<<<<<<<<<<<<<<<<<<,             pointer pre-decrement and post-decrement      >>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>
int main()
{
	int a[]={5,16,7,89,45,32,23,10};
	int *p=&a[4];
	printf("%d\n",p);
	printf("%d\n",*p);
	//ppost-decrement
	printf("%d\n",*(p--));  //first it print 45 and then decreases
	printf("%d\n",*(p--));    //first it print 89 and then decreases
	//pre-decrement
	printf("%d\n",*(--p));   //first decrement then print 16
	printf("%d\n",*(--p));    //first decrement then print 5
	return 0;
}
