
/*
#include<stdio.h>
int main()
{
	printf("%d\n",sizeof(long int));
	printf("%d",sizeof(int));
}
//  o/p===>>  4    4


===================================================================================================================
#include<stdio.h>
#include<limits.h>  //it is used to determine max or min value of any data type according to system
int main()
{
	int var1=INT_MAX;
	int var2=INT_MIN;
	printf("Ranges of signed integer is from %d to %d",var2,var1);
}

================================================================================================================
#include<stdio.h>
#include<limits.h>  //it is used to determine max or min value of any data type according to system
int main()
{
	int var1=UINT_MAX;
	int var2=0;
	printf("Ranges of unsigned integer is from %u to %u",var2,var1);
}


==========================================================================================================
//printing the range of short signed integer
#include<stdio.h>
#include<limits.h>  //it is used to determine max or min value of any data type according to system
int main()
{
	int var1=SHRT_MAX;
	int var2=SHRT_MIN;
	printf("Ranges of signed SHORT integer is from %d to %d\n",var2,var1);
}

============================================================================================================
#include<stdio.h>
#include<limits.h>  //it is used to determine max or min value of any data type according to system
int main()
{
	int var1=0;
	int var2=USHRT_MAX;  //or short unsigned int var2=USHRT_MAX;
	printf("Ranges of signed integer is from %u to %u",var1,var2);
}

===================================================================================================================
#include<stdio.h>
int main()
{
	printf("%d ",sizeof(long));  //4
	printf("%d ",sizeof(float));  // 4
	printf("%d ",sizeof(double));  // 8
	printf("%d ",sizeof(long double));  // 12
	printf("%d ",sizeof(short));//2
	printf("%d",sizeof(char));  //1
}

==========================================================================================================
#include<stdio.h>
int main()
{
	printf("%d\n",printf("%s","Hello World!"));  //    Hello World!12
	printf("%10s","Hello"); //    Hello will be printed up to 10 characters space
}

========================================================================================================================
#include<stdio.h>
int main()
{
	char c = 255;
	c = c + 10;
	printf("%d",c);  //265%255==9
}
======================================================================================================================*/
#include<stdio.h>
int main()
{
	unsigned i=1;
	int j=-4;
	printf("%u",i+j);  //-3 == 4294967293 in unsigned int
}
