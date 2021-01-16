#include<stdio.h>
struct Rectangle
{
	int length;
	int breadth;
};
int main()
{
	struct Rectangle r;
	initialize(&r,10,5);
	area(r);
	changeLength(&r,20);
}
int initialize(struct Rectangle *r,int l,int w )
{
	r->length=10;
	r->breadth=5;
	printf("Length and Breadth are Initialized...\n");
	printf("Length is %d\nBreadth is %d\n",r->length,r->breadth);
}
area(struct Rectangle r)
{
	int area= r.length*r.breadth;
	printf("Area Of Rectangle %d\n",area);
}
changeLength(struct Rectangle *r,int l)
{
	r->length=20;
	printf("Updated length is %d",r->length);
}
