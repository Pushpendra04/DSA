#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *info;
};
struct node *start;
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
		case 9:
				sort();
				break;
		case 10:
				search();
				break;
		case 11:exit(0);
				break;
	}
	}
}
void create()
{
	struct node *p,*q;
	int n,i;
	printf("Enter the number\n");
	scanf("%d",&n);
	p=(struct node*)malloc(sizeof(struct node));
	if(p==NULL)
	{
		printf("Memory not ...");
		exit(0);
	}
	printf("Enter the data\n");
	scanf("%d",&p->data);
	p->info=NULL;
	start=p;
	for(i=1;i<n;i++)
	{
		q=(struct node*)malloc(sizeof(struct node));
		if(q==NULL)
		{
			printf("Memory not ...");
			exit(0);
		}
		printf("Enter the data\n");
		scanf("%d",&q->data);
		q->info=NULL;
		p->info=q;
		p=p->info;
	}
}
void display()
{
	struct node *p;
	p=start;
	while(p!=NULL)
	{
	
		printf("Data is %d\n",p->data);
		p=p->info;
	}
}
struct node * getnode()
{
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	if(p==NULL)
	{
		printf("Memory not ...");
		exit(0);
	}
	printf("Enter the data\n");
	scanf("%d",&p->data);
	p->info=NULL;
	
	return p;
}
void insertfirst()
{
	struct node *p;
	p=getnode();
	p->info=start;
	start=p;
}
void insertlast()
{
	struct node *p,*q;
	p=start;
	while(p->info!=NULL)
	p=p->info;
	q=getnode();
	p->info=q;
}
void insertmiddle()
{
	struct node *p,*p1,*p2;
	p=start;
	int pos,i;
	printf("Enter the postion\n");
	scanf("%d",&pos);
	for(i=1;i<pos;i++)
	{
		p1=p;
		p=p->info;
	}
	p2=getnode();
	p2->info=p;
	p1->info=p2;
}
void deletefirst()
{
	struct node *p;
	p=start;
	if(start==NULL)
	printf("Invalid Input");
	else
	{
		start=p->info;
		p->info=NULL;
	}
}
void deletelast()
{
	struct node *p,*p1;
	p=start;
	while(p->info!=NULL)
	{
		p1=p;
		p=p->info;
	}
	p1->info=NULL;
}
void deletemiddle()
{
	struct node *p,*p1;
	int i,n;
	p=start;
	printf("Enter the postion\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		p1=p;
		p=p->info;
	}	
	p1->info=p->info;
	p->info=NULL;
	free(p);
}
void sort()
{
	struct node *p,*p1;
	int t;
	p=start;
	while(p!=NULL)
	{
		p1=p->info;
		while(p1!=NULL)
		{
			if(p->data>p1->data)
			{
				t=p->data;
				p->data=p1->data;
				p1->data=t;		
			}
			p1=p1->info;
		}
		p=p->info;
	}
}
void search()
{
	int item,pos=0,count=1;
	struct node *p;
	p=start;
	printf("Enter the item\n");
	scanf("%d",&item);
	while(p!=NULL)
	{
		if(item==p->data)
		{
			pos=1;
			break;
		}
		count++;
		p=p->info;
	}
	if(pos==1)
	printf("%d\n",count);
	else
	printf("Not Found\n");
}
