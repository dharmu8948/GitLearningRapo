
//    Input:
//      2
//      13
//      g e e k s f o r g e e k s
//      11
//      p r o g r a m m i n g

//     Output:
//     geeksforgeeks
//     programming



#include <stdio.h>

int main()
{
int t,n;
scanf("%d",&t);
while(t--)
{
int i,j=0;
scanf("%d",&n);
char a[2*n],b[n];
for(i=0;i<2*n;i++)
scanf("%c",&a[i]);
for(i=0;i<2*n;i++)
{
if(a[i]==' ')
continue;
else
b[j++]=a[i];
}
b[j]='\0';
int v=1;
while(b[v]!='\0')
{printf("%c",b[v]); 
v++;}
printf("\n");
}
}
