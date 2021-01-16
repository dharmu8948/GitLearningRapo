
/*
#include <stdio.h>
int main()
{
    int i, j; 
    for(i=1; i<=5; i++)
    {
    	int count=1;
        for(j=5; j>5-i; j--)
        {
            printf("%d ", i);
        }
        for(j=1; j<=5-i; j++)
        {
            printf("%d ",count);
        }
        printf("\n");
    }
    return 0;
}

*/


#include <stdio.h>
int main()
{
    int i, j; 
    for(i=1; i<=5; i++)
    {
    	int count=1;
    	for(j=1; j<=5-i; j++)
        {
            printf("%d ",count);
        }
        for(j=5; j>5-i; j--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
