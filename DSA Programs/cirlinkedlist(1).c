#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *info;
};
struct node *start=NULL;
void create();
void display();
void insertfirst();
struct node * getnode();
void insertlast();
void insertmiddle();
void deletefirst();
void deletelast();
void deletemiddle();
void sort();
void search();
void main()
{
	int choice;
	printf("1.CreateList\n2.Display\n3.InsertFirst\n"
	"4.InsertLast\n5.InsertMiddle\n6.DeleteFirst\n"
	"7.DeleteLast\n8.DeleteMiddle\n9.Sort\n10.Search\n"
	"11.Exit\n");
	while(1)
	{
	
	printf("Enter the choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
				create();
				break;
		case 2:
				display();
				break;
		case 3:
				insertfirst();
				break;
		case 4:
				insertlast();
				break;
		case 5:
				insertmiddle();
				break;
		case 6:
				deletefirst();
				break;
		case 7:
				deletelast();
				break;
		case 8:
				deletemiddle();
				break;
		/*case 9:
				sort();
				break;
		case 10:
				search();
				break;*/
		case 11:exit(0);
				break;
	}
	}
}
struct node * getnode()
{
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	return p;	
}
void create()
{
	struct node *p,*p1;
	int n;
	printf("Enter the Data\n");
	scanf("%d",&n);
	while(n!=-1)
	{
		p=getnode();
		p->data=n;
		if(start==NULL)
		{
			p->info=p;
			start=p;
		}
		else
		{
			p1=start;
			while(p1->info!=start)
			p1=p1->info;
				p1->info=p;
				p->info=start;
			
		}
		printf("Enter the Data\n");
		scanf("%d",&n);
	}
	
}
void display()
{
	struct node *p;
	p=start;
	while(p->info!=start)
	{
		printf("%d\n",p->data);
		p=p->info;
	}
	printf("%d\n",p->data);
}
void insertfirst()
{
	struct node *p,*q;
	int n;
	p=getnode();
	printf("Enter the Data\n");
	scanf("%d",&n);
	p->data=n;
	q=start;
	while(q->info!=start)
	q=q->info;
	p->info=start;
	q->info=p;
	start=p;
}
void insertlast()
{
	struct node *p,*q;
	int n;
	p=getnode();
	printf("Enter the Data\n");
	scanf("%d",&n);
	p->data=n;
	q=start;
	while(q->info!=start)
	q=q->info;
	p->info=start;
	q->info=p;
}
void insertmiddle()
{
}
void deletefirst()
{
	struct node *p;
	p=start;
	while(p->info!=start)
	p=p->info;
	p->info=start->info;
	free(start);
	start=p->info;
}
void deletemiddle()
{
	
}
void deletelast()
{
	struct node *p,*q;
	p=start;
	while(p->info!=start)
	{
		q=p;
		p=p->info;
	}
	q->info=p->info;
	free(p);
}
