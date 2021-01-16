#include<stdio.h>
#include<iostream>
#include <stdlib.h>
using namespace std;

int main() {
    // Converting a numeric string
    char str[10] = "122";
    int x = atoi(str);
    cout<<x;
    int sum=1;
    int k=x;
    int count=0;
    while(x>0){
    	count++;
    	x=x/10;
	}
	cout<<count;

   
}
