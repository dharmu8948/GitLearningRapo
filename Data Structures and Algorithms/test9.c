#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   char s[1001];
   int i;
scanf("%s", s);
int N[10] = {0, };
for (i = 0; i < strlen(s); ++i) {
    if (s[i] >= '0' && s[i] <= '9') {
        ++N[s[i] - '0'];
    }
}
for ( i = 0; i < 10; ++i) {
    printf("%d ", N[i]);
}
return 0;
	  }  

