#include<iostream>
#include<conio.h>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
int main()
{
    book b;
    b.bookid=100;
    cout<<b.bookid;
}
