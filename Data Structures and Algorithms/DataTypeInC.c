/*
int main() 
{ 
//  bool arr[2] = {true, false}; //this is valid for c++ but not c
return 0; 
} 
*/

/*
#include<stdbool.h> // b'coz of this header file it is valid in c also
int main() 
{ 
bool arr[2] = {true, false}; 
return 0; 
} 


//   If no data type is given to a variable, the compiler automatically converts it to int data type.


#include <stdio.h> 
int main() 
{ 
	signed a; 
	signed b; 

	// size of a and b is equal to the size of int 
	printf("The size of a is %d\n", sizeof(a)); 
	printf("The size of b is %d", sizeof(b)); 
	return (0); 
} 


  //   Signed is the default modifier for char and int data types.
#include <stdio.h> 
int main() 
{ 
	int x; 
	char y; 
	x = -1; 
	y = -2; 
	printf("x is %d and y is %d", x, y); // O/P: x is -1 and y is -2
} 



//  . We can’t use any modifiers in float data type. 
//   If programmer tries to use it ,the compiler automatically gives compile time error.

#include <stdio.h> 
int main() 
{ 
	signed float a; 
	short float b; 
	return (0); 
} 



// Rule 3:  Only long modifier is allowed in double data types. We cant use any other specifier with double data type. 
//          If we try any other specifier, compiler will give compile time error.

#include <stdio.h> 
int main() 
{ 
	long double a;   //  correct declaration
	return (0); 
} 



#include <stdio.h> 
int main() 
{ 
	short double a;   // error
	signed double b;  // error
	return (0); 
} 
*/


