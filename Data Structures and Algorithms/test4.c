#include<stdio.h>
max_of_four(int,int,int,int);
int main()
{
	 int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
}
   max_of_four(int a, int b, int c, int d){
    int max;
    max = (a > b? a : b);  
    max = (c > d? (c > max? c : max) : (d > max? d : max));
   return max;
   return 0;
}
