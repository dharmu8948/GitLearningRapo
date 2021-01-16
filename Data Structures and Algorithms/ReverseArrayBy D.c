// First Method

// C program to rotate an array by d elements 
/*
#include <stdio.h> 
  
// Function to left Rotate arr[] of size n by 1
void leftRotatebyOne(int arr[], int n); 
  
//Function to left rotate arr[] of size n by d

void leftRotate(int arr[], int d, int n) 
{ 
    int i; 
    for (i = 0; i < d; i++) 
        leftRotatebyOne(arr, n); 
} 
  
void leftRotatebyOne(int arr[], int n) 
{ 
    int temp = arr[0], i; 
    for (i = 0; i < n - 1; i++) 
        arr[i] = arr[i + 1]; 
    arr[i] = temp; 
} 
  
// utility function to print an array 
void printArray(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
} 
  
// Driver program to test above functions 
int main() 
{ 
    //int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int n,arr[n],i;
	printf("Enter the number of Elements :");
	scanf("%d",&n);
	printf("Enter the Elements :");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]); 
    leftRotate(arr, 2, n); 
    printArray(arr, n); 
    return 0; 
} 
=========================================================================================*/
//Second Method
//Example :
//Let the array be arr[] = [1, 2, 3, 4, 5, 6, 7], d =2 and n = 7
//A = [1, 2] and B = [3, 4, 5, 6, 7]

//Reverse A, we get ArB = [2, 1, 3, 4, 5, 6, 7]
//Reverse B, we get ArBr = [2, 1, 7, 6, 5, 4, 3]
//Reverse all, we get (ArBr)r = [3, 4, 5, 6, 7, 1, 2] 

// C program for reversal algorithm of array rotation 
#include<stdio.h> 
  
//Utility function to print an array 
void printArray(int arr[], int size); 
  
// Utility function to reverse arr[] from start to end 
void rvereseArray(int arr[], int start, int end); 
  
// Function to left rotate arr[] of size n by d 
void leftRotate(int arr[], int d, int n) 
{ 
    rvereseArray(arr, 0, d-1); 
    rvereseArray(arr, d, n-1); 
    rvereseArray(arr, 0, n-1); 
} 
  
//UTILITY FUNCTIONS
// function to print an array 
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        printf("%d ", arr[i]); 
} 
  
//Function to reverse arr[] from index start to end
void rvereseArray(int arr[], int start, int end) 
{ 
    int temp; 
    while (start < end) 
    { 
        temp = arr[start]; 
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    } 
} 
  
// Driver program to test above functions 
int main() 
{ 
    int arr[] = {1, 2, 3, 4, 5, 6, 7}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int d = 2; 
    leftRotate(arr, d, n); 
    printArray(arr, n); 
    return 0; 
}
