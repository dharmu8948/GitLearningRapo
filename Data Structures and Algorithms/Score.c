//program to display the commentson the score of cricket batsman
#include<stdio.h>
int main()
{
    int score;
    printf("Enter the score");
    scanf("%d",&score);
    if(score<0)
        printf("\n Invalid input of score");
    else if(score==0)
        printf("\n Duck out");
    else if(score<50)
        printf("\n Normal score");
    else if(score<100)
        printf("\n Half Century");
    else
        printf("\n Cantury");
}
