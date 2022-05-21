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
		/*case 3:
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
				break;*/
		case 11:exit(0);
				break;
	}
	}
}
struct node * getnode()
{
	
}
void create()
{
	struct node *p,*q;
	int n,i;
	printf("Enter the number\n");
	scanf("%d",&n);
	p=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data\n");
	scanf("%d",&p->data);
	start=p;
	p->info=start;
	q=start;
	for(i=1;i<n;i++)
	{
		p=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data\n");
		scanf("%d",&p->data);
		p->info=start;
		q->info=p;
		q=q->info;
		
	}
	
}
void display()
{
	struct node *p;
	p=start;
	do
	{
		printf("%d\n",p->data);
		p=p->info;
	}while(p!=start);
}
