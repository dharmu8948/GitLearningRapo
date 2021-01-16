#include<stdio.h>
int main()
{
    int p,pn,i,count1,count2;
    scanf("%d",&p);
    scanf("%d",&pn);
     int total = p/2;
        int right = pn/2;
        int left = total - right;
        if(right < left){
            printf("%d",right);
        }
        else {
            printf("%d",left);
        }
}

