/*
# include <stdio.h>
void fun(int x)
{
    x = 30;
}
 
int main()
{
  int y = 20;
  fun(y);         //it is valid for pass by value i,e y=20
  printf("%d", y);  // O/P: 20
  return 0;
}



# include <stdio.h>
void fun(int *ptr)
{
    *ptr = 30;
}
 
int main()
{
  int y = 20;
  fun(&y);     //its valid for pointer
  printf("%d", y);   // so O/P: 30
 
  return 0;
}


#include <stdio.h>
 
int main()
{
    int *ptr;
    int x;
 
    ptr = &x;
    *ptr = 0;
 
    printf(" x = %d ", x);        // x=0
    printf(" *ptr = %d\n", *ptr);  //  *ptr=0
 
    *ptr += 5;
    printf(" x  = %d ", x);      //  x=5
    printf(" *ptr = %d\n", *ptr);  // *ptr=5
 
    (*ptr)++;
    printf(" x = %d ", x);   // x=6
    printf(" *ptr = %d\n", *ptr); //*ptr=6
 
    return 0;
}



#include <stdio.h>
 
int main()
{
    int arri[] = {1, 2 ,3};
    int *ptri = arri;
 
    char arrc[] = {1, 2 ,3};
    char *ptrc = arrc;
    printf("%d\n",sizeof(int));
    printf("sizeof arri[] = %d ", sizeof(arri));  // 12
    printf("sizeof ptri = %d ", sizeof(ptri));   //  8
 
    printf("sizeof arrc[] = %d ", sizeof(arrc));   // 3
    printf("sizeof ptrc = %d ", sizeof(ptrc));    //  8
 
    return 0;
}



#include <stdio.h>
 
int main()
{
    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;
 
    printf("%f ", *ptr2);      // 90.500000
    printf("%d", ptr2 - ptr1);  // 3
 
   return 0;
}






#include<stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr1 = arr;
    int *ptr2 = arr + 5;
    printf("Number of elements between two pointer are: %d.\n", 
                                (ptr2 - ptr1));                // 5
    printf("Number of bytes between two pointers are: %d",  
                              (char*)ptr2 - (char*) ptr1);   //20
    return 0;
}




#include<stdio.h> 
int main() 
{ 
   int a; 
   char *x; 
   x = (char *) &a; 
   a = 512; 
   x[0] = 1; 
   x[1] = 2; 
   printf("%d",a);  // 513 0r machine dependent 
   return 0; 
}



int main()
{
 char *ptr = "GeeksQuiz";
 printf("%c", *&*&*ptr);  //  G ,        b'coz *& cancel to each other
 return 0;
}



*/
#include<stdio.h>
void fun(int arr[])
{
  int i;
  int arr_size = sizeof(arr)/sizeof(arr[0]);
  for (i = 0; i < arr_size; i++)
      printf("%d ", arr[i]);  // 10 20 or machine dependent
}
 
int main()
{
  int i;
  int arr[4] = {10, 20 ,30, 40};
  fun(arr);
  return 0;
} 
