#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
int a[MAXSIZE];
int rear=-1;
int front=-1;
void EnQueue();
int DeQueue();
void display();
void main()
{
	int choice,item;
	while(1)
	{
		printf("1.EnQueue\n2.DeQueue\n3.display\n4.Exit\n");
		printf("Enter the Choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					EnQueue();
					break;
			case 2:
					item=DeQueue();
					printf("Delete ittem is %d\n",item);
					break;
			case 3:
					display();
					break;
			case 4:
					break;
		}
	}
}
void EnQueue()
{
	int item;
	if(rear==MAXSIZE-1)
	{
		printf("Overflow");
		exit(0);
	}
	printf("Enter the item\n");
	scanf("%d",&item);
	if(front==-1&&rear==-1)
	front=rear=0;
	else
	rear++;
	a[rear]=item;
}
int DeQueue()
{
	if(front==-1||front>rear)
	{
		printf("Uderflow");
		return -1;
	}
	if(front>rear)
	front=rear=-1;
	return a[front++];
}
void display()
{
	int i;
	if(front==-1||front>rear)
	{
		printf("Queue is Empty\n");
		exit(0);
	}
	for(i=front;i<=rear;i++)
	{
		printf("%d\t",a[i]);
	}
}
