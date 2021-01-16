#include <stdio.h>
 
int main()
{
   float c = 5.0;
   printf ("Temperature in Fahrenheit is %.2f", (9/5)*c + 32);
   return 0;
}

  /* Question 3 Explanation: 
Since 9 and 5 are integers, integer arithmetic happens in subexpression (9/5) and we get 1 as its value. 
To fix the above program, we can use 9.0 instead of 9 or 5.0 instead of 5 so that floating point arithmetic happens.*/
