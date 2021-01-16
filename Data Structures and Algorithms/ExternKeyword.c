
/*
int var; 
int main(void) 
{ 
var = 10;
printf("%d",var); 
return 0; 
} 


extern int var; 
int main(void) 
{ 
printf("%d",var);//CE b'coz extern keyword is not initialized
return 0; 
} 




extern int var; 
int main(void) 
{ 
var = 10;  
} 

*/
#include <stdio.h> 
extern int var; 
int main(void) 
{ 
var = 10; 
return 0; 
} 

