#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int Max = 25;
    char sen[Max],i;
    fgets(sen, Max,stdin);
    for(i=0;i<Max;i++)
    {
    	if(sen[i]==NULL)
    	printf("\n");
    	else
    	printf("%s",sen[i]);
	}
    return 0;
}
