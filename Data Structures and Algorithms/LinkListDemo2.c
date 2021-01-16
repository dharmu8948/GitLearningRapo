#include<stdio.h>
#include<conio.h>
struct node
{
	int info;
	struct node *link;
};
struct node *Start=NULL;
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
	scanf("%d",&temp->info);
	temp->link=NULL;
	if(Start==NULL)
	{
		Start=temp;
	}
	else
	{
		t=Start;
		while(t->link!=NULL)
			t=t->link;
		t->link=temp;
	}
}
//deletion of First Node
void deleteNode()
{
	struct node *r;
	if(Start==NULL)
	printf("There is No element exist!!.HOw can You Delete !!\n");
	else
	{
		r=Start;
	Start=Start->link;
	free(r);
	}
}
//  Triversing of a List
void viewList()
{
	struct node *t;
	if(Start==NULL)
	printf("List is Empty\n");
	else
	{
		t=Start;
		while(t!=NULL)
		{
			printf("%d ",t->info);
			t=t->link;
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
				insertNode();
				break;
			case 2:
				deleteNode();
				break;
			case 3:
				viewList();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid Choice!!!");
		}
	}
}
