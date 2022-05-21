#include<stdio.h>
#include<conio.h>
#define size 10
struct Stack
{
	char stack[size];
	int top;
}st;
void Push(char c)
{
	if(st.top==size-1)
	{
		printf("Overflow");
		return;
	}
	st.top=st.top+1;
	st.stack[st.top]=c;
}
char Pop()
{
	if(st.top==-1)
	{
		printf("UnderFlow");
		return 'z';
	}
	return st.stack[st.top--];
}
int main()
{
	char ch[20],t,f=0;
	st.top=-1;
	printf("Enter expression:");
	gets(ch);
	int i=0;
	while(ch[i]!='\0')
	{
		if(ch[i]=='{'||ch[i]=='['||ch[i]=='(')
		{
			Push(ch[i]);
		}
		else if(ch[i]=='}')
		{
			t=Pop();
			if(t=='z'||t=='('||t=='[')
			{
				f=1;
				break;
			}	
		}
		else if(ch[i]==')')
		{
			t=Pop();
			if(t=='z'||t=='{'||t=='[')
			{
				f=1;
				break;
			}
		}
		else if(ch[i]==']')
		{
			t=Pop();
			if(t=='z'||t=='{'||t=='(')
			{
				f=1;
				break;
			}	
		}
		i++;
	}
	if(st.top!=-1)
	f=1;
	if(f==1)
	{
		printf("Not Balance");
	}
	else
	printf("Balance");
	return 0;
}

