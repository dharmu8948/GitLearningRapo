#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
return strcmp(a,b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
return strcmp(b,a);
}
int different_chars(const char *a)
{
	int diff=0;
	while(*a!='\0'){
	if(!strchr(a+1,*a))
	diff++;
	a++;
}
return diff;
}
int sort_by_number_of_distinct_characters(const char* a, const char* b) {
 int res=different_chars(a)-different_chars(b);
 return(res)?res:lexicographic_sort(a,b);   
}

int sort_by_length(const char* a, const char* b) {
int res=strlen(a)-strlen(b);
return(res)?res:lexicographic_sort(a,b);
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
int half=len/2;
int sort=0,i;
while(!sort)
{
	sort=1;
	for(i=0;i<len-1;i++)
	{
		if(cmp_func(arr[i],arr[i+1])>0){
		char *tmp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=tmp;
		sort=0;
	}
	}
}
} 


int main() 
{
    int n,i;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
   string_sort(arr, n, lexicographic_sort);
    for(i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n"); 
}
