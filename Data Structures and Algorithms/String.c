#include<stdio.h>
int main()
{
  int i;
  char str[5];
  printf("Enter the String ");
  scanf("%s",&str);
  for(i=0;i<5;i++)
  {
    if(str[i]==str[i+1])
    {
      return 0;
    }
    else
     printf("%s",str[i]);
  }
}
