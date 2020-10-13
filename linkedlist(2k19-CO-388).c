//NAME - SPARSH SIHA
//ROLL NO. - 2K19/CO/388

#include<stdio.h>
#include<stdlib.h>


struct Node
{
	int value;
	struct Node *next;
};

struct Node *insertAtBeginning(struct Node *s, int x)
{
	struct Node *q = (struct Node*)malloc(sizeof(struct Node));
	q->value = x;
	q->next = s;
	s = q;
	return s;
}

struct Node *insertAtEnd(struct Node *s, int x)
{
	struct Node *q = (struct Node*)malloc(sizeof(struct Node));
	q->value = x;
	q->next = NULL;
	struct Node *p = s;
	if(s == NULL)
	{
		s = q;
		return s;
	}
	while(p->next!=NULL)
	{
		p = p->next;
	}
	p->next = q;
	return s;
}

struct Node *insertAfter(struct Node *s, int x, int y)
{
	struct Node *q = (struct Node*)malloc(sizeof(struct Node));
	q->value = x;
	q->next = NULL;
	if(s == NULL)
	{
		return s;
	}
	struct Node *p = s;
	while(p!=NULL && p->value!=y)
	{
		p=p->next;
	}
	if(p==NULL) 
	{
		return s;
	}
	if(p->value==y)
	{
		q->next=p->next;
		p->next=q;
		return s;
	}
}
struct Node *insertInSorted(struct Node *s, int x)
{
	struct Node *q = (struct Node*)malloc(sizeof(struct Node));
	q->value = x;
	q->next = NULL;
	if(s == NULL)
	{
		s = q;
		return s;
	}
	if(s->value>=x)
	{
		q->next = s;
		s=q;
		return s;
	}
	struct Node *temp = s;
	while(temp->next!=NULL && temp->next->value<x )
	{	
		temp = temp->next;
	}
	if(temp->next == NULL)
	{
		temp->next = q;
		return s;
	}
	q->next = temp->next;
	temp->next = q;
	return s;
}
struct Node *deleteNode(struct Node *s, int x)
{
	struct Node *p, *q;
	p = s;
	q = NULL;
	while(p!=NULL && p->value!=x)
	{
		q=p;
		p=p->next;
	}
	if(q==NULL)
	{
		s = s->next;
		free(p);
		return s;
	}
	if(p==NULL)
	{
		return s;
	}
	if(p->value==x)
	{
		q->next=p->next;
		free(p);
	}
	return s;
}
struct Node *deleteNodeUsingPosition(struct Node *s, int x)
{
	if(x==1)
	{
		struct Node *temp = s;
		s=s->next;
		free(temp);
		return s;
	}
	struct Node *current = s;
	while(x!=2)
	{
		current=current->next;
		x--;
	}
	struct Node *temp = current->next;
	current->next=current->next->next;
	free(temp);
	return s;
}

int count(struct Node *s)
{
	int count = 0;
	while(s!=NULL)
	{
		count++;
		s=s->next;
	}
	return count;
}

void display(struct Node *s)
{
	printf("Linked list: ");
	while(s!=NULL)
	{
		printf("%d ", s->value);
		s = s->next;
	}
	printf("\n");
}

int main()
{
	struct Node *start;
	start = NULL;
	int n;
	do
	{
		printf("========\n");
		printf("1.Insert at Beginning\n");
		printf("2.Insert at end\n");
		printf("3.Display\n");
		printf("4.Delete a node at a particular position\n");
		printf("5.Insert after \n");
		printf("6.Delete a node\n");
		printf("7.Number of nodes\n");
		printf("8.Enter elements in sorted manner\n");
		printf("9.Exit\n");
		printf("Enter an option\n");
		scanf("%d", &n);
		if(n==9)
		{
			break;
		}
		switch(n)
		{
			case 1:
			{
				int num;
				printf("Enter value you want to add: ");
				scanf("%d", &num);
				start = insertAtBeginning(start, num);
				break;

			}
			case 2:
			{
				int num;
				printf("Enter value you want to add: ");
				scanf("%d", &num);
				start = insertAtEnd(start, num);
				break;
			}
			case 3:
			{
				display(start);
				break;
			}
			case  4:
			{
				int x;
				printf("Enter position of node to be deleted: ");
				scanf("%d", &x);
				if(x>count(start))
				{
					printf("Given position not available\n");
					break;
				}
				start=deleteNodeUsingPosition(start, x);
				break;
			}
			case 5:
			{
				int x, y;
				printf("Enter value you want to add: ");
				scanf("%d", &x);
				printf("Enter the value after which you want to add: ");
				scanf("%d", &y);
				start=insertAfter(start, x, y);
				break;
			}
			case 6:
			{
				int x;
				printf("Enter value you want to delete: ");
				scanf("%d", &x);
				start=deleteNode(start, x);
				break;
			}
			case 7:
			{
				int x = count(start);
				printf("Total Nodes: %d\n", x);
				break;
			}
			case 8:
			{
				int x;
				printf("Enter number of elements to add: ");
				scanf("%d", &x);
				printf("Enter elements to add: ");
				for(int i=0; i<x; i++)
				{
					int y;
					scanf("%d", &y);
					start=insertInSorted(start, y);
				}
				display(start);
				break;
			}
		}
	}while(1);
}