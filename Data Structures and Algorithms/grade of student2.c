//program to check the result of the student out of four subject at least 3 subjectare greater than or equal to 4 then pass
#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,count=0;
    double avg;
    printf("Enter the marks of student");
    scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
    if(m1>=40)
        count++;
    if(m2>=40)
        count++;
    if(m3>=40)
        count++;
    if(m4>=40)
        count++;
    if(count>=3)
        printf("\n PASS");
    else
        printf("\n FAIL");
}
