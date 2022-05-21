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
void main()
{
	int choice;
	printf("1.CreateList\n2.Display\n3.Insert\n4.Exit\n");
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
				exit(0);
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

