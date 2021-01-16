#include<stdio.h>
struct node
{
	int info;
	struct node *link;
};
struct node *insert(struct node *start,int data);
void search(struct node *start,int data);
void Display(struct node *start);
main()
{
	int choice,data;
	struct node *start=NULL;
	while(1)
	{
		printf("1.Insert\n");
		printf("2.Display\n");
		printf("3.Search\n");
		printf("4.Exit\n");
		printf("Enter Your Choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the Element to be inserted: ");
				scanf("%d",&data);
				start=insert(start,data);
				break;
			case 2:
				display(start);
				break;
			case 3:
				printf("Enter the Element which want to be Searched: ");
				scanf("%d",&data);
				search(start,data);
				break;
			case 4:
				exit(1);
			default:
				printf("Invalid Choice!!\n");
		}
	}
}
struct node *insert(struct node *start,int data)
{
	struct node *temp,*p;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;
	//if list is empty or newnode to be added before first node
	if(start==NULL||data<(start->info))
	{
		temp->link=start;
		start=temp;
		return start;
	}
	else
	{
		p=start;
		while(p->link!=NULL&&(p->link->info)<data)
		p=p->link;
		temp->link=p->link;
		p->link=temp;
	}
	return start;
}
void search(struct node *start,int data)
{
	struct node *p;
	int pos;
	if(start==NULL||data<(start->info))
	{
		printf("Element %d Does not found\n",data);
		return;
	}
	p=start;
	pos=1;
	while(p!=NULL&&(p->info)<=data)
	{
		printf("%d found at position %d\n",data,pos);
		return;
	}
	p=p->link;
	pos++;
}
void display(struct node *start)
{
	struct node *q;
	if(start==NULL)
	{
		printf("List is Empty\n");
		return;
	}
	q=start;
	printf("List is....: ");
	while(q)
	{
		printf("%d ",q->info);
		q=q->link;
	}
	printf("\n");
}
