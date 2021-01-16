// Reverse of a link list
#include<stdio.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start=NULL;
struct node* createNode()
{
	struct node *n;
	n = (struct node*)malloc(sizeof(struct node));
	return (n);
}
//insertion at end
void insertNode()
{
	struct node *temp,*t;
	temp=createNode();
	printf("Enter a Number: ");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		t=start;
		while(t->next!=NULL)
			t=t->next;
		t->next=temp;
	}
}
//  Triversing of a List
void viewList()
{
	struct node *t;
	if(start==NULL)
	printf("List is Empty\n");
	else
	{
		t=start;
		while(t!=NULL)
		{
			printf("%d ",t->data);
			t=t->next;
		}
	}
}
// Revers logic
int reverseList()
{	
	struct node *t1,*t2,*t;
	t1=t2=NULL;
	if(start==NULL)
	  printf("List is Empty");
	  else
	{
		while(start)
	{
		t2=start->next;
		start->next=t1;
		t1=start;
		start=t2;
	}
	}
	{
		start=t;
		printf("Reversed List is.....:  ");
		while(t!=NULL)
		{
			printf("%d ",t->data);
			t=t->next;
		}
		printf("\n");
	}
}
//MenuDriven program
int Menu()
{
	int ch;
	printf("\n1.Add Value to the List: ");
	printf("\n2.View List: ");
	printf("\n3.Reversed List");
	printf("\n4.Exit\n");
	printf("\n\n\nEnter Your Choice: ");
	scanf("%d",&ch);
	return (ch);
}
void main()
{
	while(1)
	{
		switch(Menu())
		{
			case 1:
				insertNode();
				break;
			case 2:
				viewList();
				break;
			case 3:
				reverseList();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid Choice!!!");
		}
	}
}
