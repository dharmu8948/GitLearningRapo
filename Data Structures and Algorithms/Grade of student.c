//program to find the grade of student
#include<stdio.h>
int main()
{
    int m1,m2,m3;
    double avg;
    printf("Enter the marks of student");
    scanf("%d%d%d",&m1,&m2,&m3);
    if(m1>=40&&m1>=40&&m3>=40)
    {
        printf("\n Pass");
        avg=(m1+m2+m3)/3.0;
        if(avg>=70)
            printf("\n Grade A with Distinction");
        else if(avg>=60)
            printf("\n Grade A ");
        else if(avg>=50)
            printf("\n Grade B");
        else
            printf("\n Grade C");
    }
    else
        printf("\n Fail !!!!");
    return 1;
}
