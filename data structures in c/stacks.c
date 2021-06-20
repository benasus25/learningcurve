//Name- Sparsh Sinha
//Roll no. - 2k19/CO/388
#include<stdio.h>
#define size 50

struct stack
{
	int a[size];
	int top;
};

int top(struct stack *s)
{
	if(s->top==-1)
	{
		printf("Stack is now empty\n");
		return -1;
	}
	return s->a[s->top];
}

int pop(struct stack *s)
{
	if(s->top==-1)
	{
		printf("Stack is now empty\n");
		return -1;
	}
	int y=s->a[s->top];
	s->top=s->top-1;
	return y;
}

void push(struct stack *s, int t)
{
	if(s->top==size-1)
	{
		printf("Stack is full]\n");
		return;
	}
	s->top=s->top+1;
	s->a[s->top]=t;
}

void display(struct stack s)
{
	printf("Given stack(from top to bottom elements): ");
	while(s.top>-1)
	{
		printf("%d ", s.a[s.top]);
		s.top=s.top-1;
	}
	printf("\n");
}
int main()
{
struct stack s;
s.top=-1;
int n;
do
{
	printf("==========\n");
	printf("1.Push element in a stack\n");
	printf("2.Pop element from a stack\n");
	printf("3.Show the top element\n");
	printf("4.Display stack\n");
	printf("5.Exit\n");
	printf("Enter an option\n");
	scanf("%d", &n);
	if(n==5)
	{
		break;
	}
	switch(n)
	{
		case 1:
		{
			int num;
			printf("Enter the element to be pushed into the stack: ");
			scanf("%d", &num);
			push(&s, num);
			break;
		}
		case 2:
		{
			printf("Element that has been popped: %d\n", pop(&s));
			break;
		}
		case 3:
		{
			printf("Top element: %d\n", top(&s));
			break;
		}
		case 4: 
		{
			display(s);
			break;
		}
		default:
		{
			printf("Enter the correct option\n");
			break;
		}
	}
}
while(1);
}