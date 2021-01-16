#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
struct node *create_list(struct node *start);
void display(struct node *start);
void count(struct node *start);
void search (struct node *start,int data);
struct node *addatbeg(struct node *start,int data);
struct node *addatend(struct node *start,int data);
struct node *addafter(struct node *start,int data,int item);
struct node *addbefore(struct node *start,int data,int item);
struct node *addatpos(struct node *start,int data,int pos);
struct node *del(struct node *start,int data);
struct node *reverse(struct node *start);

int main()
{
	struct node *start=NULL;
	int choice,data,item,pos;
	while(1)
	{
		printf("1.Create List\n");
		printf("2.Display\n");
		printf("3.Count\n");
		printf("4.Search\n");
		printf("5.Add toEmpty List\n");
		printf("6.Add At End\n");
		printf("7.Add After Node\n");
		printf("8.Add Before Node\n");
		printf("9.Add at Position\n");
		printf("10.Delete\n");
		printf("11.Reverse\n");
		printf("12.Quit\n");
		printf("Enter Your Choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				start = create_list(start);
				break;
			case 2:
				display(start);
				break;
			case 3:
				count(start);
				break;
			case 4:
				printf("Enter the element to be Searched : ");
				scanf("%d",&data);
				search(start,data);
				break;
			case 5:
				printf("Enter the Element to be Inserted : ");
				scanf("%d",&data);
				start=addatbeg(start,data);
				break;
			case 6:
				printf("Enter the Element to be Inserted : ");
				scanf("%d",&data);
				start=addatend(start,data);
				break;
			case 7:
				printf("Enter the Element to be Inserted : ");
				scanf("%d",&data);
				printf("Enter the Element after which to insert : ");
				scanf("%d",&item);
				start=addafter(start,data,item);
				break;
			case 8:
				printf("Enter the Element to be Inserted : ");
				scanf("%d",&data);
				printf("Enter the Element before which to insert : ");
				scanf("%d",&item);
				start=addbefore(start,data,item);
				break;
			case 9:
				printf("Enter the Element to be Inserted : ");
				scanf("%d",&data);
				printf("Enter the Position at which to insert : ");
				scanf("%d",&pos);
				start=addatpos(start,data,pos);
				break;
			case 10:
				printf("Enter the Element to be Deleted : ");
				scanf("%d",&data);
				start=del(start,data);
				break;
			case 11:
				start= reverse(start);
				break;   
			case 12:
				exit(1);
			default :
				printf("Wrong Choice!!!\n");
		}
	}
}
struct node *create_list(struct node *start)
{
	int data;
	struct node *link;
	start = (struct node *)malloc(sizeof(struct node));
	start->info=data;
}
void display(struct node *start)
{
	struct node *p;
	if(start==NULL)
	{
		printf("List is empty :");
		return;
	}
	p=start;
	printf("List is :  ");
	while(p->link!=NULL)
	{
		printf("%d ",p->info);
		p=p->link;
	}
}
void count(struct node *start)
{
	struct node *p;
	int count=0;
	p=start;
	while(p!=NULL)
	{
		p=p->link;
		count++;
	}
	printf("Number of Elements Are %d\n",count);
}
void search (struct node *start,int data)
{
	struct node *p;
	int pos=1;
	if(start==NULL)
	{
		printf("There is no Element exist in the List :\n");
		return ;
	}
	p=start;
	while(p!=NULL)
	{
		if(p->info==data)
		{
		   printf("Item %d is found at Position %d\n",data,pos);
		   return;	
		}
		p=p->link;
		pos++;
	}
	printf("Item %d is Not fount in List\n",data);
}
struct node *addatbeg(struct node *start,int data)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->info=data;
	if(start==NULL)
	{
		start=temp;
		return start;
	}
	temp->link=start;
	start=temp;
	return start;
}
struct node *addatend(struct node *start,int data)
{
	struct node *temp,*p;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;
	p=start;
	while(p!=NULL)
	{
		p=p->link;
	}
	p->link=temp;
	temp->link=NULL;
	return start;
}
struct node *addafter(struct node *start,int data,int item)
{
	struct node *temp,*p;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;
	p=start;
	while(p->link!=NULL)
	{
		if(p->link->info==item)
		  {
		  	temp->link=p->link;
		  	p->link=temp;
		  	return start;
		  }
		  p=p->link;
	}
	printf("%d is not found in the List ",item );
	return start;
}
struct node *addbefore(struct node *start,int data,int item)
{
	struct node *temp,*p;
	if(start==NULL)
	{
		printf("List is Empty \n");
		return start;
	}
	if(item==start->info)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		temp->info=data;
		temp->link=start;
		start=temp;
		return start;
	}
	p=start;
	while(p->link!=NULL)
	{
		if(p->link->info==item)
		{
			temp=(struct node *)malloc(sizeof(struct node));
		    temp->info=data;
		    temp->link=p->link;
		    p->link=temp;
		    return start;
		}
		p=p->link;
	}
	printf("%d is not present in the List\n",item);
	return start;
}
struct node *addatpos(struct node *start,int data,int pos)
{
	struct node *temp,*p;
	int i;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->info=data;
	if(pos==1)
	{
		temp->link=start;
		start=temp;
		return start;
	}
	p=start;
	for(i=1;i<pos-1&&p!=NULL;i++)
	p=p->link;
	if(p==NULL)
	printf("there id less than %d elements\n",pos);
	else
	{
		temp->link=p->link;
		p->link=temp;
	}
	return start;
}
struct node *del(struct node *start,int data)
{
	struct node *temp,*p;
	if(start==NULL)
	printf("List is Empty\n");
	return ;
	if(start->info == data)    //deletion of first node
	{
		temp=start;
		start=start->link;
		free(temp);
		return start;
	}
	p=start;   //deletion in between or at end
	while(p->link!=NULL)
	{
		if(p->link->info == data)
		{
			temp = p->link;
			p->link = temp->link;
			free(temp);
			return start;
		}
		p=p->link;
	}
	printf("Element %d is not found\n",data);
	return start;
}
struct node *reverse(struct node *start)
{
	struct node *prev,*temp,*next;
	prev=NULL;
	temp=start;
	while(temp!=NULL)
	{
		next=temp->link;
		temp->link=prev;
		prev=temp;
		temp=next;
	}
	start=prev;
	return start;
}
