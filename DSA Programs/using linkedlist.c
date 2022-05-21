#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *info;
};
struct stack *top=NULL;
void push();
void display();
struct stack * getnode();
void pop();
void peek();
void display();
void main()
{
	int choice;
	do 
	{  
		system("cls");
		printf("\n *****MAIN MENU*****");  
		printf("\n 1. PUSH");  
		printf("\n 2. POP");  
		printf("\n 3. PEEK");  
		printf("\n 4. DISPLAY");  
		printf("\n 5. EXIT");  
		printf("\n Enter your option: ");  
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:		push();
					break;
			case 2:
					pop();
					break;
			case 3:
					peek();
					break;
			case 4:
					display();
					break;
			case 5:
					exit(0);
		}
		getch();
	}while(choice!=6);
}
struct stack * getnode()
{
	struct stack *p;
	p=(struct stack *)malloc(sizeof(struct stack));
	
	return p;
}
void push()
{
	struct stack *p;
	p=getnode();
	printf("Enter the data\n");
	scanf("%d",&p->data);
	if(top==NULL)
	{
		top=p;
		p->info=NULL;
	}
	else
	{
		p->info=top;
		top=p;
	}
}
void pop()
{
	struct stack *p;
	p=top;
	if(top==NULL)
	printf("Underflow");
	else
	{
		top=top->info;
		printf("Value is %d\n",p->data);
		free(p);
		
	}
}
void peek()
{
	if(top==NULL)
	printf("Stack is Empty\n");
	else
	printf("%d\n",top->data);
	
}
void display()
{
	struct stack *p;
	p=top;
	if(p==NULL)
	printf("Stack is Empty\n");
	else
	{
	
		while(p!=NULL)
		{
			printf("Data is %d\n",p->data);
			p=p->info;	
		}
	}
}
