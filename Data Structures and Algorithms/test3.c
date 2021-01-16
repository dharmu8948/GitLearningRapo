#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int Max = 25;
    char c;
    char str[Max];
    char sen[Max];
    scanf("%c ", &c);
    scanf("%s ", str);
    fgets(sen, Max,stdin);
    printf("%c\n", c);
    printf("%s\n", str);
    printf("%s\n", sen);
    return 0;
}
