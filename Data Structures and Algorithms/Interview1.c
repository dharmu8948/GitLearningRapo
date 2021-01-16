/*
//Example 1
#include<stdio.h>
int main()
{
	printf("%d", printf("%s", "Hello World!"));
}
=====================================================
Example 2   
#include<stdio.h>
int main()
{
	printf("%s\n","Hello");
	printf("%11s", "Hello");
	getch();
}
=============================================================
Example 3  
#include<stdio.h>
int main()
{
	char c=255; //since a character cantain 1byte memory only which is equal to 8bit;therefore maximum value it can hold 255 
	c+=10;
	printf("%d",c);// when we divide 265 by 256 we get the remainder as 9
}
================================================================
Example 4 
#include<stdio.h>
int main()
{
	unsigned i=1;
	int j=-4;
	printf("%u", i+j);// it prints -3 but it prints 2's complements of -3
}
=========================================================================
Example 5
#include<stdio.h>
int main()
{
	int var=052; //when we plce 0 in front of any value it must treats as octal value not decimal value
	printf("%d", var);  //so for octal value we can't print decimal value there we convert octal to decimal value
}                       //i,e it convert as 5*8^1+2*8^0=40+2=42
==============================================================================
Example 5(ii)  
#include<stdio.h>
int main()
{
	int var=052; //when we plce 0 in front of any value it must treats as octal value not decimal value
	printf("%o", var);  //so for octal value we can print octal value
}                       
======================================================================================
Example 6 
#include<stdio.h>
#define STRING "%s\n"
#define NESO "Welcome to Institute of Engineering and Technology!"
int main()
{
	printf(STRING,NESO);
	printf("%s\n","Welcome to Institute of Engineering and Technology!");
	getch();
}
============================================================================================
Example 7 
#include<stdio.h>

int main()
{
	printf("Size of Integer is=%d\n",sizeof(int));  //sizeof() is a unary operator not a function 
	printf("Size of Character is=%c\n",sizeof(char));
	printf("Size of Float is=%f\n",sizeof(float));
	printf("Size of Long is=%ld\n",sizeof(long));
	printf("Size of Double is=%lf\n",sizeof(double));
//	printf(Size of Octal is="%o",sizeof(octal));	
	printf("%s\n","Welcome to Institute of Engineering and Technology!");
	getch();
}
========================================================================================
Example 8 
#include<stdio.h>
int main()
{
	float me=1.1; //after decimal point it can have 6 digit
	double you=1.1; //after decimal point it can have 14 digit
	if(me==you) // here the data type float is not equal in the sence of precesion value varies
	printf("Hi");
	else
	printf("Hello");
}
=============================================================================================
Example 9  
#include<stdio.h>
int main()
{
//	unsigned i=1;
	static int var=5;  //in static variable intialize once then only once the value is assign
	printf("%d ", var--);
	if(var)
	main();  //here main is treated as recursive function
}
===============================================================================================
Example 10 
#include<stdio.h>
main()
{
	extern int j;//it extern storage class
	j=20;
	printf("%d", j); //linker error: undefined symbol j" because we initilize the extern variable inside main()"
}
=============================================================================================
Example 10(ii) 
#include<stdio.h>
main()
{
	extern out;//it extern storage class
//	j=20;
	printf("%d", out); //it will not gives any error because we initilize the extern variable outside main()" 
}
int out=100;
==========================================================================
Example 11
#include<stdio.h>
void main()
{
	char *p;
	printf("%d %d",sizeof(*p),sizeof(p));//since p is a character pointer 
	//(1 byte to store value and 2byte to store address ;so sizeof(*p)has value 1
	// and sizeof(p) is cantain address of charater is int type so its value is 4	
}
=============================================================================================
Example 12 
#include<stdio.h>
int main()
{
	printf("%d\n",3>2);
	printf("%d",3>>2);
	
}
================================================================================================
Example 13 
#include<stdio.h>
int main()
{
	int j=0,i;
	for(i=0;i<100;i++){
		j=j++;
	}
	printf("%d",j);
	
}
============================================================================================
Example 14 
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int x=5;
	bool b1=true;
	bool b2=false;
	if((x==4)&& !b2)
	printf("1");
	printf("2")
	if((b2=true)&&b1)
	printf("3");
	
}
=================================================================================================Example 13 
Example 15 
#include<stdio.h>
int main()
{
	int i=1024;
	for(;i;i>>=1){  //i>>=1 is treated as i=i>>1 i,e right shift operator and i=1024 so its binary representation
		printf("Hello World"); //is 1024=100 0000 0000and after right shifting(i=i>>1)it become 010 0000 0000=512
	}                         //and then 001 0000 0000=256 and so on....it at 11th position is 000 0000 0001
	                        //and at 12th position it will become 000 0000 0000 which is treated as false
}========================================================================================================
Example 16  
#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<20;i++)
	{
		switch(i)
		{
			case 0:i+=5; //since there is no break statement so it prints all values as follows..
			             // in first iteration firstly i=0+5 then 5+2 then 7+5 then 12+4=16 so in first iteration
			             //we will get i=16 then from for loop i++ become i=17 then check condition is true and goto
						 //default stmt it will become  i=17+4=21  
			case 1:i+=2;
			case 5:i+=5;
			default: i+=4;
		}
		printf("%d ",i);
	}
}
================================================================================
Example 17 
#include<stdio.h>
int main()
{
	int i=-5;
	while(i<=5)
	{
		if(i>=0)
		break; //when i==0 then i will come out  the while loop
		else
		{
			i++;
			continue; //after continue we should check again the condition of while loop
			         //i=-4 then continue,i=-3 then continue,i=-2 then continue,i=-1 then continue,i=0 then continue
		}
		printf("Dharmendra"); //it will not printed any where
	}
}
======================================================================================
Example 18 
#include<stdio.h>
int main()
{
	int i=0;
	for(printf("one\n");i<3&&printf("");i++) //sinse printf("") returns zero  which gives false value to
	                                        //condition  thats why loop doesn't execute and as printf("one\n")
	                                        //before condition so"one" is printed
	{
		printf("Hi!\n");
	}
}
================================================================
Example 19 
#include<stdio.h>
int main()
{
   unsigned int i=500; //since range of unsigned int(4 byte) ie 0 to 4294967295
   while(i++!=0);//it returns 501!=0 again 502!=0 and  so on up to 42294967295 then it again check 4294967296!=0
   printf("%d ",i);    //but after 4294967295 it we start from 0 then 0!=0 is false condition and out from while loop
                //and increases by 1 so print 1	
}
//==================================================================================
Example 20 
#include<stdio.h>
int main()
{
	unsigned int var1=4294967295;
	unsigned int var2=4294967296;  //it gives output as zero because its range is 0 to 4294967295
    unsigned int var3=4294967297;
	printf("%u\n",var1);    //and after 4294967295 it will again start from 0
	printf("%u\n",var2);
	printf("%u\n",var3);
	
}
============================================================================================
Example 20 
#include<stdio.h>
int main()
{
	int var1 = -2147483648; //int type is by default signed type do not need to write explacitely
	int var2=2147483647;  //it gives output as zero because its range is -2147483648 to 2147483647
    int var3=2147483648;
	printf("%d\n",var1);    //and after 2147483647 it will again start from -2147483648
	printf("%d\n",var2);
	printf("%d",var3);
}
===========================================================================================
//Example 21 Perfect number 
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(n==sum)
	printf("Perfect Number");
	else
	printf("Non Perfect Nmber");
	
}
================================================================================
// Example 22 ***********Conditional operator**********************************
 #include<stdio.h>
 int main()
 {
 	int var=75;
 	int var2=56;
 	int num;
 	num=sizeof(var)?(var2>23)?((var==75)?'A':0):0:0;
 	printf("%d",num);
 }
 =================================================================================================
 //Example 23***************Camma Operator*********************************
 #include<stdio.h>
 int main()
 {
 	int var;
 	int num;
 	num=(var=15,var+35);
 	printf("%d",num);
 }
 =========================================================================================================
 //Example 24 **************   Asociativity property    ********************************************
 #include<stdio.h>
 int main()
 {
 	int a;
 	a=fun1() + fun2();
 	printf("%d",a);
 }
 int fun1()
 {
 	printf("Neso");
 	return 1;
 }
 int fun2()
 {
 	printf("Academy");
 	return 1;
 }
 =========================================================================================================
 #include<stdio.h>
 int main()
 {
 	int a=10,b=20,c=30,d=40;
 	if(a<=b == d>c){
 	printf("TRUE ");
 }
 else
 	printf("FALSE");
 }
 ==========================================================================================================
 #include<stdio.h>
 int main()
 {
 	int i=5;
 	int var=sizeof(i++);  //i++ inside sizeof is not evaluated according to c99 standerd
 	printf("%d %d",i,var);
 	return 0;
 }
 =========================================================================================================
 #include<stdio.h>
 int main()
 {
 	int a=1;
 	int b=1;
 	int c=++a||b++;
 	int d=b--&&--a;
 	printf("%d %d %d %d",d,c,b,a);
 }
 ========================================================================================================
 //Example  <<<<<<<<<<<<<<   Multiplication of Matrix     >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>..
 #include<stdio.h>
 int main()
 {
 	int S1[5][5],S2[5][5],R[5][5],n,i,j,r1,c1,r2,c2,sum=0,k;
 	printf("Enter the Number of Rows and Columns for First Matrix : ");
 	scanf("%d %d",&r1,&c1);
 	printf("Enter the Number of Rows and Columns for Second Matrix : ");
 	scanf("%d %d",&r2,&c2);
 	printf("Enter The Element of First Matrix : \n");
 	for(i=0;i<r1;i++)
 	{
 		for(j=0;j<c1;j++)
 		scanf("%d",&S1[i][j]);
	 }
	 printf("Enter The Element of Second Matrix : \n");
 	for(i=0;i<r2;i++)
 	{
 		for(j=0;j<c2;j++)
 		scanf("%d",&S2[i][j]);
	 }
	 printf("\n");
	 if(r2!=c1)
	 {
	 	printf("Sorry! We cannot Multiply the Matrices of S1 and S2");
	 }
	 else{
 	for(i=0;i<r1;i++)
 	{
 		for(j=0;j<c2;j++)
 		{
 		  for(k=0;k<r2;k++)
		   {
		      sum += S1[i][k] * S2[k][j];	
		   }
		   R[i][j]=sum;
		   sum=0;	
		}
	 }
	 printf("The Resultant Matrix : \n");
	 for(i=0;i<r1;i++)
	 {
	 	for(j=0;j<c2;j++)
	 	{
	 		printf("%d  ",R[i][j]);
		 }
		 printf("\n");
	 }
}
 }
 ===============================================================================================
 #include<stdio.h>
 void fun(int *A,int n);  //this is specific for any integer value even for array also
 void fun(int *A,int n)   //it's general method
 {
 	int i;
 	for(i=0;i<n;i++)
 	printf("%d ",A[i]);
 }
 int main()
 {
 	int A[]={2,5,8,1,0,77};
 	fun(A,6);
 }
 ==================================================================================================
 #include<stdio.h>
 void fun(int A[],int n);  //this is specific only array
 void fun(int A[],int n)   // we can modify the any value of array
 {
 	int i;
 	A[0]=25;
 	for(i=0;i<n;i++)
 	printf("%d ",A[i]);
 }
 int main()
 {
 	int A[]={2,5,8,1,0,77};
 	fun(A,6);
 }
 ============================================================================================*/
 //      how a function return an array
 #include<stdio.h>
 int * fun(int n);
 int * fun(int n)
 {
 	int *P;
 	P=(int *)malloc(n*sizeof(int));
 	return(P);
 }
 int main()
 {
 	int *A,i;
 	A=fun(7);
 	for(i=0;i<7;i++)
 	printf("%d ",*A);
 }
