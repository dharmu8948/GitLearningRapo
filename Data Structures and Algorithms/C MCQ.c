/*
#include <stdio.h>
int main()
{
    char arr[100];
    printf("%d", scanf("%s", arr));
    // Suppose that input value given
    //    for above scanf is "GeeksQuiz" 
    return 1;
}
//  In C, scanf returns the no. of inputs it has successfully read.i,e 1



#include <stdio.h>
 
int main()
{
    printf("%c ", 5["GeeksQuiz"]);  // printf("%c ", "GeeksQuiz"[5]);== Q
    return 0;
}



#include <stdio.h>

int main()
{
    char str[50] = {0};
    scanf("%4s", str);  //print at most four character de to %4s
    printf(str);
    getchar();
    return 0;
}

*/
#include<stdio.h>
 
int main()
{
    char *s = "Geeks Quiz";
    int n = 7;
    printf("%.*s", n, s);  // output: Geeks Q
    return 0;
}
