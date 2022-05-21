#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
int stack[MAXSIZE];
int top=-1;
void Push();
int Pop();
int Peek();
void display();
void main()
{
	int choice,item;
	do
	{
	
	printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
	printf("Enter the choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
				printf("Enter the Item\n");
				scanf("%d",&item);
				Push(item);
				break;
		case 2:
				item=Pop();
				printf("Item is %d",item);
				break;
		case 3:
				item=Peek();
				printf("Item is %d",item);
				break;
		case 4:
				display();
				break;
	}
	}while(choice!=5);
}
void Push(int item)
{
	if(top==MAXSIZE-1)
	{
		printf("Overfloaw");
		exit(0);
	}
	else
	{
		top++;
		stack[top]=item;
	}
}
int Pop()
{
	if(top==-1)
	{
		printf("Underflow");
		exit(0);
	}
	else
	{
		return stack[top--];
	}
}
int Peek()
{
	if(top==-1)
	{
		printf("Underflow");
		exit(0);
	}
	else
	{
		return stack[top];
	}
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
	printf("%d\t",stack[i]);
}
