// C program to demonstrate that size_t or 
// any unsigned int type should be used 
// carefully when used in a loop. 
#include<stdio.h> 

#define N 10 

int main() 
{ 
	int a[N],size_t,n; 

	// This is fine. 
	for (n = 0; n < N; ++n) { 
		a[n] = n; 
	} 
		
	// But reverse cycles are tricky for unsigned 
	// types as they can lead to infinite loops. 
	for (n = N-1; n >= 0; --n) 
		printf("%d ", a[n]); 
} 

