#include<stdio.h>
int main(){
	char s[10];
	scanf("%s",s);
    int i=0,sum=0;
        while(s[i]!='\0')
        {
            if(s[i]=='I')
            
                sum+=1;
                i++;
            }
            
            if(s[i]=='V')
            {
                sum+=5;
                i++;
            }
            if(s[i]=='X')
            {
                sum+=10;
                i++;
            }
            if(s[i]=='L')
            {
                sum+=50;
                i++;
            }
            if(s[i]=='C')
            {
                sum+=100;
                i++;
            }
            if(s[i]=='D')
            {
                sum+=500;
                i++;
            }
            if(s[i]=='M')
            {
                sum+=1000;
                i++;
            }
        }
    printf("%d",sum);
}
