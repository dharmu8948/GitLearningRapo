#include <stdio.h>
int main()
{
    if (sizeof(int) > -1)
        printf("Yes");
    else
        printf("No");
    return 0;
}

/*    Question 8 Explanation: 
In C, when an integer value is compared with an unsigned it, the int is promoted to unsigned. Negative numbers are stored in
 2's complement form and unsigned value of the 2's complement form is much higher than the sizeof int.  */
