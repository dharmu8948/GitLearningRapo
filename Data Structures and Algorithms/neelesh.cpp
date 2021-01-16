#include<iostream>
#include<conio.h>
using namespace std;
struct book
{
    int bookid;
    char title[30];
    float price;
};
int main()
{
struct book b={100,"neelesh c++ ki book",250.00};
cout<<"id ,title & price is"<<b.bookid<<b.title<<b.price;
}
