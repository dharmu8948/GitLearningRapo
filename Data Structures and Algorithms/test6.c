#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *arr, i,temp,j;
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    for(i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    for(i = 0,j = n-1; i < n/2; i++,j--) {
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }

    for(i = 0; i < n; i++)
        printf("%d ", *(arr+i));
    return 0;
}
