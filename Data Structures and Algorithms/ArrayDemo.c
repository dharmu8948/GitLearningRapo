/*
#include <stdio.h> 
  
int main() 
{ 
    int arr[5]; 
    arr[0] = 5; 
    arr[2] = -10; 
    arr[3 / 2] = 2; // this is same as arr[1] = 2 
    arr[3] = arr[0]; 
  
    printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]); 
  
    return 0; 
} 
===================================================================================
// This C program compiles fine 
// as index out of bound 
// is not checked in C. 
  
#include <stdio.h> 
  
int main() 
{ 
    int arr[2]; 
  
    printf("%d ", arr[3]); 
    printf("%d ", arr[-2]); 
  
    return 0; 
}
================================================================================================
#include <stdio.h> 
int main() 
{ 
  
    // Array declaration by initializing it with more 
    // elements than specified size. 
    int arr[2] = { 10, 20, 30, 40, 50 }; 
    printf("%d %d %d %d %d %d",arr[0],arr[2],arr[1],arr[20],arr[5],arr[9]);
  
    return 0; 
}  
===================================================================================================
//<<<        An Example to show that array elements are stored at contiguous locations    >>>>>>>>>>>>.
// C program to demonstrate that array elements are stored 
// contiguous locations 
  
#include <stdio.h> 
int main() 
{ 
    // an array of 10 integers.  If arr[0] is stored at 
    // address x, then arr[1] is stored at x + sizeof(int) 
    // arr[2] is stored at x + sizeof(int) + sizeof(int) 
    // and so on. 
    int arr[5], i; 
  
    printf("Size of integer in this compiler is %lu\n", sizeof(int)); 
  
    for (i = 0; i < 5; i++) 
        // The use of '&' before a variable name, yields 
        // address of variable. 
        printf("Address arr[%d] is %p\n", i, &arr[i]); 
  
    return 0; 
}
====================================================================================
// 1st program to show that array and pointers are different 
#include <stdio.h> 
  
int main() 
{ 
   int arr[] = {10, 20, 30, 40, 50, 60}; 
   int *ptr = arr; 
     
   // sizof(int) * (number of element in arr[]) is printed 
   printf("Size of arr[] %d\n", sizeof(arr)); 
  
   // sizeof a pointer is printed which is same for all type  
   // of pointers (char *, void *, etc) 
   printf("Size of ptr %d", sizeof(ptr)); 
   return 0; 
} 
========================================================================================
// IInd program to show that array and pointers are different 
#include <stdio.h> 
  
int main() 
{ 
   int arr[] = {10, 20}, x = 10; 
   int *ptr = &x; // This is fine 
   arr = &x;  // Compiler Error "because Assigning any Address to an Array variable is not allowed"
   return 0; 
}
===============================================================================================
#include <stdio.h> 
  
int main() 
{ 
   int arr[] = {10, 20, 30, 40, 50, 60}; 
   int *ptr = arr; 
   printf("arr[2] = %d\n", arr[2]); 
   printf("*(arr + 2) = %d\n", *(arr + 2)); 
   printf("ptr[2] = %d\n", ptr[2]); 
   printf("*(ptr + 2) = %d\n", *(ptr + 2)); 
   return 0; 
} 
===========================================================================================*/

