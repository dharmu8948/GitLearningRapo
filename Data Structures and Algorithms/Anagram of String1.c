#include<stdio.h>
#include <stdbool.h>
int main()
{
    char ch1[1000],ch2[1000];
    scanf("%s",ch1);
    scanf("%s",ch2);
    int l1=strlen(ch1);
    int l2=strlen(ch2);
    bool visited[l1];
    int count=0,i,j;
    for(i=0;i<l1;i++)
    {
        visited[i]=false;
    }
    if(l1==l2)
    {
        for(i=0;i<l1;i++)
        {
            char ch = ch1[i];
            for(j=0;j<l2;j++)
            {
                if(ch!=ch2[j] && !visited[j])
                {
                    count++;
                    visited[j] = true;
                }
                if(ch==ch2[j] && visited)
                {
                	count++;
                	visited[j]=true;
				}
            }
        }
    }
    printf("%d\n",count);
}

