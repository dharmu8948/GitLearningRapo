#include<stdio.h>
struct node
{
	int info;
	struct node *prev,*next;
};
struct node *start=NULL;
void insertAsFirstNode()
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	printf("Enter a number: ");
	scanf("%d",&n->info);
	n->next=NULL;
	n->prev=NULL;
	if(start==NULL)
	start=n;
	else
	{
		start->prev=n;
		n->next=start;
		start=n;
	}
}
void deleteFirstNode()
{
	struct node *r;
	if(start==NULL)
	printf("List is Empty");
	else
	{
		r=start;
		start=start->next;
		start->prev=NULL;
		free(r);
	}
}
void viewList()
{
	struct node *t;
	if(start==NULL)
	printf("List is Empty");
	else
	{
		t=start;
		while(t->next!=NULL)
		{
			printf("%d ",t->info);
			t=t->next;
		}
	}
 } 
 
 //MenuDriven program
int Menu()
{
	int ch;
	printf("\n1.Add Value to the List: ");
	printf("\n2.Delete First Value: ");
	printf("\n3.View List: ");
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
				insertAsFirstNode();
				break;
			case 2:
				deleteFirstNode();
				break;
			case 3:
				viewList();
				printf("\n");
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid Choice!!!");
		}
	}
}
