#include<stdio.h>
#include<stdlib.h>
struct Stack
{
	int top;
	int size;
	int *S;
};
void createStack(struct Stack *st)
{
	printf("Enter Size : ");
	scanf("%d",&st->size);
	st->top=-1;
	st->S=(int *)malloc(st->size*sizeof(int));
}
void Display(struct Stack st)
{
	int i;
	for(i=top;i>=0;i--)
	printf("%d ",st.S[i]);
	printf("\n");
}
void push(struct Stack *st,int x)
{
	if(st->top==st->size-1)
	{
		printf("Stack Overflow!!!  ");
	}
	else
	{
		st->top++;
		st->S[st->top]=x;
		
	}
}
int pop(struct Stack *st)
{
	int x=-1;
	if(st->top==-1)
	printf("Stack Underflow....!!");
	else
	{
		x=st->S[st->top--];
	}
	return x;
}
int main()
{
	struct Stack st;
	createSatck(&st);
	push(&st,10);
	push(&st,20);
	push(&st,30);
	push(&st,40);
	push(&st,50);
	Diplay(st);
}
