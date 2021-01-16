#include <stdio.h>
#include<string.h>
int main()
{
int t,i,j;
scanf("%d",&t);
for(i=0;i<t;i++){
int cnt=0;
char a[10000],b[10000];
scanf("%s",a);
scanf("%s",b);
int l1 = strlen(a),l2 = strlen(b);
for(i=0;i<l1;i++){
for(j=0;j<l2;j++){
if(a[i]==b[j]){
++cnt;
b[j]='0';
break;
}
}
}
printf("%d\n",l1 + l2 - (2*cnt));
}
return 0;
}
