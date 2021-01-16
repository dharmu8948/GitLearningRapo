#include<stdio.h>
#include <stdlib.h>

int main() {
    // Converting a numeric string
    char str[10] = "122";
    int x = atoi(str);
    printf("Converting '122': %d\n", x);
    int sum=1;
    int k=x;
    int count=0;
    while(x>0){
    	count++;
    	x=x/10;
	}
	printf("%d",count);

   
}
