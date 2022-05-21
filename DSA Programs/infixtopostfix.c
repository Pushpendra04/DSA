#include<stdio.h>
#define MAXSIZE 100
struct stack
{
	int top;
	char data[MAXSIZE];
};
void postfix(char [],char []);
char peep(struct stack);
int isoperator(char);
void push(struct stack*,char);
char pop(struct stack *);
int preced(char);
main()
{
	char in[100],post[100];
	printf("Enter the infix equations\n");
	gets(in);
	postfix(in,post);
	puts(post);
}
void postfix(char in[],char post[])
{
	int i=0,j=0;
	char ch;
	struct stack s1;
	s1.top=-1;
	while(in[i]!='\0')
	{
		if(in[i]=='(')
		push(&s1,in[i]);
		else if(in[i]==')')
		{
		
			ch=pop(&s1);
			while(ch!='(')
			{
				post[j++]=ch;
				ch=pop(&s1);
			}
		}
		else if(isoperator(in[i]))
		{
			ch=peep(s1);
			while(ch!='('&& preced(ch)>=preced(in[i]))
			{
				post[j++]=pop(&s1);
				ch=peep(s1);
			}
			push(&s1,in[i]);
		}
		else
		post[j++]=in[i];
		i++;
	}
	post[j]='\0';
}
char peep(struct stack s1)
{
	char item;
	if(s1.top==-1)
	{
		printf("Underflow");
		return 0;
	}
	item=s1.data[s1.top];
	return item;
}
int isoperator(char ch)
{
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%')
	return 1;
	else
	return 0;
}
void push(struct stack *p,char item)
{
	if(p->top==MAXSIZE-1)
	{
		printf("Overflow\n");
		return ;
	}
	p->top++;
	p->data[p->top]=item;
	
}
char pop(struct stack *p)
{
	char item;
	if(p->top==-1)
	{
		printf("Underflow");
		return 0;
	}
	item=p->data[p->top];
	p->top--;
	return item;
}
int preced(char op)
{
	switch(op)
	{
		case '+':
		case '-':
				 return 1;
		case '*':
		case '/':
				return 2;
		default:
				return 0;
	}
}
