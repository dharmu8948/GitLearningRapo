/*
#include <stdio.h>  
int main() 
{ 
    char a = 30, b = 40, c = 10; 
    char d = (a * b) / c; 
    printf ("%d ", d);  
    return 0; 
}
  // Explanation
// At first look, the expression (a*b)/c seems to cause arithmetic overflow because signed characters can have values only from
// -128 to 127 (in most of the C compilers), and the value of subexpression ‘(a*b)’ is 1200 which is greater than 128.
// But integer promotion happens here in arithmetic done on char types and we get the appropriate result without any overflow.*/

#include <stdio.h> 

int main() 
{ 
	char a = 0xfb; 
	unsigned char b = 0xfb; 

	printf("a = %c", a); // ?
	printf("\nb = %c", b);   // ?

	if (a == b) 
	printf("\nSame"); 
	else
	printf("\nNot Same");   //not same==>> correct
	return 0; 
}
/*
‘a’ and ‘b’ have same binary representation as char. But when comparison operation is performed on ‘a’ and ‘b’, 
they are first converted to int. ‘a’ is a signed char, when it is converted to int, its value becomes -5 (signed value of 0xfb).
 ‘b’ is unsigned char, when it is converted to int, its value becomes 251.
 The values -5 and 251 have different representations as int, so we get the output as “Not Same”.*/
