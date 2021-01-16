/*

#include <stdio.h>
struct sample {
    int a=0;
    char b='A';
    float c=10.5;
};

int main()
{
    struct sample s;
    printf("%d, %c, %f", s.a, s.b, s.c);
    return 0;
}
// Error: Can not initialize members here. We can only declare members inside the structure,
// initialization of member with declaration is not allowed in structure declaration.

 
 

#include<stdio.h>
struct st
{
    int x;
    static int y;
};
 
int main()
{
    printf("%d", sizeof(struct st));
    return 0;
}


//  In C, struct and union types cannot have static members. 
//  In C++, struct types are allowed to have static members, but union cannot have static members in C++ also.

*/


//Ques: A structure variable can be assigned to other using =, but cannot be compared with other using ==

/*
In C, static storage class cannot be used with:
	
Global variable

Function parameter  //correct

Function name

Local variable
*/



