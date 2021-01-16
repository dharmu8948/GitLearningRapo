#include<stdio.h>
struct node
{
	char data;
	struct node *next;
};
struct node* reverse(struct node *start)
{
	struct node *current,*t1,*t2;
	current=start;
	t1=NULL;
	while(current!=NULL)
	{
		t2=current->next;
		current->next=t1;
		t1=current;
		current=t2;
	}
	start=t1;
	return start;
}
int  insert(struct node *start,char data)
{
	struct node *temp1;
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	if(start==NULL)
	start=temp;
	else
	{
		temp1=start;
		while(temp1->next)
		temp1=temp->next;
		temp1->next=temp;
	}
	return start;
}
void print(struct node *start)
{
	while(start)
	{
		printf("%c ",start->data);
		start=start->next;
	}
}
int main()
{
	struct node* start=NULL;
	start=insert(start,'a');
	start=insert(start,'b');
	start=insert(start,'c');
	start=insert(start,'d');
	start=insert(start,'e');
	print(start);
	start=reverse(start);
	print(start);
}
