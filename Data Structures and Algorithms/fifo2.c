#include<stdio.h>
 
int main()
{
      int S[10], pf= 0, i,j, s, pages, frames;
      printf("\nEnter Total Number of Pages:\t");
      scanf("%d", &pages);
      printf("\nEnter values of Reference String:\n");
      for(i= 0; i< pages; i++)
      {
            printf("Value No. [%d]:\t", i+1);
            scanf("%d", &S[i]);
      }
      printf("\nEnter Total Number of Frames:\t");
      {
            scanf("%d", &frames);
      }
      int temp[frames];
      for(i=0;i<frames;i++)
      {
            temp[i] = -1;
      }
      for(i=0;i<pages;i++)
      {
            s = 0;
            for(j=0;j<frames;j++)
            {
                  if(S[i] == temp[j])
                  {
                        s++;
                        pf--;
                  }
            }     
            pf++;
            if((pf<=frames) && (s==0))
            {
                  temp[i] = S[i];
            }   
            else if(s == 0)
            {
                  temp[(pf- 1) % frames] = S[i];
            }
            printf("\n");
            for(i=0;i<frames;i++)
            {     
                  printf("%d\t", temp[i]);
            }
      } 
      printf("\nTotal Page Faults:\t%d\n", pf);
      return 0;
}
