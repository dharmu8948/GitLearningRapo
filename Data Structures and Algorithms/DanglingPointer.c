/*

// EXAMPLE 2 
int* ptr = NULL; 
{ 
	int x = 10; 
	ptr = &x; 
} 
// x goes out of scope and memory allocated to x is free now. 
// So ptr is a dangling pointer now. 
*/

// EXAMPLE 1 
int* ptr = (int*)malloc(sizeof(int)); 
free(ptr); 

// ptr is a dangling pointer now and operations like following are invalid 
*ptr = 10; // or printf("%d", *ptr); 

