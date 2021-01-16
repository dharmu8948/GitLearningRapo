/*
#include <stdlib.h> 
#include <stdio.h> 
enum {false, true}; 
int main() 
{ 
int i = 1; 
do
{ 
	printf("%d\n", i); // 1
	i++; 
	if (i < 15)   //2<15
	break;                      //      true so break stmt be call out go out to the loop
	} while (true); 

	getchar(); 
	return 0; 
} 
====================================================================================================================

char *getString() 
{ 
	char str[] = " Will I be printed?";	 
	return str; 
} 
int main() 
{ 
	printf("%s", getString()); 
	getchar(); 
} 
// output: Will I be printed?

=======================================================================================================================
int main() 
{ 
	static int i=5; 
	if(--i){ 
		main(); 
		printf("%d ",i); 
	} 
} 
//  Output: 0 0 0 0
//  Explanation: Since i is a static variable and is stored in Data Section, all calls to main share same i.

==================================================================================================================
int main() 
{ 
	static int var = 5; 
	printf("%d ",var--); 
	if(var) 
		main();				 
} 
// Output: 5 4 3 2 1
======================================================================================================================*/
#include <stdio.h> 
int main() 
{ 
printf("%p", main); 
getchar(); 
return 0; 
} 

