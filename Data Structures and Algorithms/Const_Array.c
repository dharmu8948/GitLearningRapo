#include<stdio.h>
int main()
{
	const int A[10] = {1,2,3,4,5,6,7,8,9,10};
	A[1] = 45;  //re assignment is not allowed in const. array i,e we can't modify const. array
	return 0;
}
