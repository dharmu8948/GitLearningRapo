//program to check type of char
/*  #include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    if(isalpha(ch))
        printf("\n Alphabet");
    else if(isdigit(ch))
        printf("\n Digit");
    else if(isspace(ch))
        printf("\n space or tab or new line");
    else
        printf("\n Special character");
}
===================================================================================================
//program for conversion of character case
 #include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character ");
    scanf("%c",&ch);
    if(isupper(ch))
        printf("\n uppercase its lower case=%c",tolower(ch));
    else if(islower(ch))
        printf("\n lowercase its uppercase=%c",toupper(ch));
    else
        printf("\n Not an alphabet");
}
====================================================================================================
//checking with ASCII
//A-Z  ==> 65 to 90 ,&& a-z ==> 97 to 122, && 0-9 ==> 48 to 57
 #include<stdio.h>
int main()
{
    char ch;
    printf("\n Enter a character ");
    scanf("%c",&ch);
    if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
        printf("\n Alphabet");
    else if(ch>=48&&ch<=57)
        printf("\n Digit");
    else if(ch==' s'||ch=='\t'||ch=='\n')
        printf("\n Space or Tab or New line");
    else
        printf("\n Special Character");
}
 /*========================================================================================================== 
//program to convert the case of alphabet
 #include<stdio.h>
int main()
{
    char ch;
    printf("\n Enter a character ");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
        printf("\n Upper case alphabet and its Lower case=%c",(ch+32));
    else if(ch>=97&&ch<=122)
        printf("\n Lower case alphabet and its Upper case alphabet=%c",(ch-32));
    else
        printf("\n Not an alphabet");
} */
