#include<stdio.h>
int main()
{
  int n,q,i,j,k,count=0;
  scanf("%d",&n);            // 9
  char ch[n];               
  scanf("%s",&ch);           // abacsddaa
  scanf("%d",&q);           //  2
  int a[q];
 // for(i=1;i<=q;i++)
 //   scanf("%d",&a[i]);
  for(i=0;i<q;i++)
                                    
  {
  	scanf("%d",&a[i]);         //  9    
    for(j=0;j<a[i];j++)        //j=1<= a[i] < = 9 
    {
      if(ch[j]==ch[a[i]])       //  ch[1]==ch[a[i]] => ch[1]==ch[9] i,e a .......................
            count++;
    }
    printf("%d\n",count);
  }
}
