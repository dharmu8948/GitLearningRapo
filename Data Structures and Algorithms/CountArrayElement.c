#include<stdio.h>
int main()
{
	int A[]={1,2,3,4,5,6,7,8,9,0,11,22,33,44,55,66,77,88,99,111,222,333,444,555,666,777,888,999,1111
	,2222,3333,4444,5555,6666,7777,8888,9999,100,1000,10000};
	system("color a");
	printf("Size of Array is %d\n",sizeof(A));
	printf("Number of elements in Array is %d",sizeof(A)/sizeof(A[0]));
}
