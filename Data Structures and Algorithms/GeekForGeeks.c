/*

#include<stdio.h>
int main()
{
	static int i=5;
	if(--i)
	{
		main();
		printf("%d ",i);
	 } 
}

==================================================================================
void main() {  }   //compile and executed successfully

=========================================================================================
#include<stdio.h> 
int main() 
{ 
    int i = 1; 
    printf("%d %d %d\n", i++, i++, i); 
    return 0; 
} 


===================================================================================================
void fun()   //here we can paas any number of arguments so no compile time error
 {  }  
int main(void) 
{ 
    fun(10, "GfG", "GQ"); 
    return 0; 
} 

===================================================================================================================
void fun(void)   //here we can paas only no argument type method i,e fun() otherwise we will get C.E.
 {  } 
int main(void) 
{ 
    fun(10, "GfG", "GQ"); 
    return 0; 
}

===================================================================================================================

#include <stdio.h> 
int main()    // it accept any number of argument then there is no effect on execution
{ 
    static int i = 5; 
    if (--i){ 
        printf("%d ", i); 
        main(1000000000000); 
    } 
} 

==================================================================================================================

#include <stdio.h> 
int main(void)    // if we pass void as parameter in main() then must always pass no argument type main() otherwise we will
{                 //  get compile time error
    static int i = 5; 
    if (--i){ 
        printf("%d ", i); 
        main(10);              //Compile at this line B'z we paased as argument in Main(void)
    } 
} 

=====================================================================================================================

void fun()     // no error if we pass any number of parameter in given method  
 {  }  
int main(void) 
{ 
    fun(10, "GfG", "GQ"); 
    return 0; 
} 
=======================================================================================================================
// Program 2 (Fails in compilation in both C and C++) 
void fun(void)          //// error if we pass we fun(void) as  argument
 {  } 
int main(void) 
{ 
    fun(10, "GfG", "GQ");  //CE: in this line
    return 0; 
} 
==========================================================================================================================

DATA TYPE                      	MEMORY(BYTES)           	RANGE	                                 FORMAT SPECIFIER
short int                   	2                   	-32,768 to 32,767                               	%hd
unsigned short int	            2                        	0 to 65,535	                                    %hu
unsigned int                 	4	                0 to 4,294,967,295                                     	%u
int	                            4 	         -2,147,483,648 to 2,147,483,647	                            %d
long int                    	4                	-2,147,483,648 to 2,147,483,647                         %ld
unsigned long int           	4	            0 to 4,294,967,295                                           %lu
long long int                	8	           -(2^63) to (2^63)-1                                            %lld
unsigned long long int      	8	                 0 to 18,446,744,073,709,551,615	                      %llu
signed char	                    1	              -128 to 127	                                                 %c
unsigned char                	1	               0 to 255                                                    	%c
float                        	4	                                                                         	%f
double                        	8	                                                                         	%lf
long double	                    12	                                                                          	%Lf

====================================================================================================================
#include <stdio.h> 
int main() 
{ 
    int a = 1; 
    char b ='G'; 
    double c = 3.14; 
    printf("Hello World!\n"); 
  
    //printing the variables defined above along with their sizes 
    printf("Hello! I am a character. My value is %c and "
           "my size is %lu byte.\n", b,sizeof(char)); 
    //can use sizeof(b) above as well 
  
    printf("Hello! I am an integer. My value is %d and "
           "my size is %lu  bytes.\n", a,sizeof(int)); 
    //can use sizeof(a) above as well 
  
    printf("Hello! I am a double floating point variable."
           " My value is %lf and my size is %lu bytes.\n",c,sizeof(double)); 
    //can use sizeof(c) above as well 
  
    printf("Bye! See you soon. :)\n"); 
  
    return 0; 
} 

==================================================================================================================
//In ISO C, you can define main either to take no arguments, or to take two arguments that represent the command
 //line arguments to the program, like this:


int main (int argc, char *argv[]){   //compiles fine but no output
	
}
==========================================================================================================

#include<stdio.h>
int main()
{
	int i,n,a,b,c,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		sum=sum+(a+b+c);
		printf("%d\n",sum);
	}
}

=======================================================================================================================

#include <stdio.h>

int main() {
    float a,d;
    int n,p,i;
    float sum;
    scanf("%d",&p);
    for(i=0;i<p;i++){
        sum=0;
	scanf("%f",&a);
	scanf("%f",&d);
	scanf("%d",&n);
	sum=((n)*(2*a+(n-1)*d)/2);
	printf("%f\n",sum);
    }
	return 0;
}
========================================================================================================================

// if we 
#include<stdio.h>
int main()
{
	int n,i,j,a,loc;
	printf("Enter the Number of Inputs : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	//	printf("Enter the Number of elements : ");
		scanf("%d",&a);
		int arr[i][a];
	//	printf("Enter the Elements of Array: \n");
		for(j=0;j<a;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	//	printf("Enter the Elements to be Searched: ");
		scanf("%d",&loc);
		for(j=0;j<a;j++)
		{
			if(arr[i][j]==loc)
		//	printf("Element Found At index: ");
				printf("%d\n",j);
		}
	}
}

=========================================================================================================================*/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,x;
	scanf("%d",&n);
	float a[n],min,min1;
	char **name = (char**)malloc(n*sizeof(char*));
	for(i=0;i<n;i++)
	{
		name[i] = (char*)malloc(15*sizeof(char));
		scanf("%s",name[i]);
		scanf("%f",&a[i]);
	}
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
	}
//	min=a[0];
//	printf("%d",min);
	min1=a[1];
	for(i=2;i<n;i++)
	{
		if(min1>a[i]&&min<a[i]){
			min1=a[i];
			x=i;
		}
	}
	printf("%.2f - ",min1);
	printf("%s\n",name[x-1]); 
}
*/
//==================================================================================================
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,min,min1;
	scanf("%d",&n);
	int a[n];
	char **name = (char**)malloc(n*sizeof(char*));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		name[i] = (char*)malloc(10*sizeof(char));
		scanf("%s",name[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d - ",a[i]);
		printf("%s\n",name[i]);
	}
}

//=============================================================================================================

#include<stdio.h> 
int main() 
{ 
   printf("%x", -1<<1); 
   getchar(); 
   return 0; 
} 

//  Output is dependent on the compiler. For 32 bit compiler it would be fffffffe and for 16 bit it would be fffe.
=======================================================================================================================

# include <stdio.h> 
# define scanf  "%s Geeks For Geeks " 
main() 
{ 
   printf(scanf, scanf); 
   getchar(); 
   return 0; 
}

===========================================================================================================================


#include <stdlib.h> 
#include <stdio.h> 
enum {false, true}; 
int main() 
{ 
   int i = 1; 
   do
   { 
      printf("%d\n", i); 
      i++; 
      if (i < 15) 
        continue; 
   } while (false); 
  
   getchar(); 
   return 0; 
} 
//  Output: 1
// Explanation: The do wile loop checks condition after each iteration. So after 
// continue statement, control transfers to the statement while(false). Since the condition is false ‘i’ is printed only once.


============================================================================================================================

#include <stdlib.h> 
#include <stdio.h> 
enum {false, true}; 
int main() 
{ 
   int i = 1; 
   do
   { 
     printf("%d\n", i); 
     i++; 
     if (i < 15) 
       break; 
     } while (true); 
  
     getchar(); 
     return 0; 
} 

=========================================================================================================================

char *getString() 
{ 
    char str[] = "Will I be printed?";     
    return str; 
} 
int main() 
{ 
    printf("%s", getString()); 
    getchar(); 
} 

==================================================================================================================

int main() 
{ 
    static int i=5; 
    if(--i){ 
        main(); 
        printf("%d ",i); 
    }    
} 
//  Output: 0 0 0 0
// Explanation: Since i is a static variable and is stored in Data Section, all calls to main share same i.

=======================================================================================================================

#include <stdio.h>
int main()
{
   printf("new_c_questionby");
   printf("rgeeksforgeeks"); 
   getchar();
   return 0;
}


=========================================================================================================================*/

#include<stdio.h> 
// Program to print %
int main() 
{ 
   printf("%%"); 
   getchar(); 
   return 0; 
} 
// We can also print “%” using below.
