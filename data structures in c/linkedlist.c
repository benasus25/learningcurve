#include<stdlib.h>
#include<stdio.h>

struct Node
{
  int data;
  struct Node* next;
};

void printll (struct Node* n)
{
  printf("The list is :");
  while(n!=NULL)
  {
    printf("%d ",n->data );
    n=n->next;
  }
  printf("\n");
}

void printllrec(struct Node*n)
{
  if (n==NULL) return;
  printf("%d ",n->data);
  printllrec(n->next);
}

void printreversellrec(struct Node*n)
{
  if (n==NULL) return;
  printreversellrec(n->next);
  printf("%d ",n->data);
}


struct Node* insertatbeginning(struct Node *head ,int x)
{
  struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
  temp ->data =x;
  temp ->next =head; 
  head = temp;
  return head;
}

struct Node* insertatend(struct Node* head, int x)
{
  struct Node*p,*q;
  p = (struct Node*)malloc(sizeof(struct Node));
  q=head;
  p->data=x;
  p->next = NULL;
  if(head==NULL)
  {
    head = p;
    return head;
  }
  else
  {
    while(q->next!=NULL)
    {
      q=q->next;
    }
    q->next=p;
    return head;
  }
}

struct Node* insertatposition(struct Node* head, int x, int n)
{
  struct Node *q = (struct Node*)malloc(sizeof(struct Node));
  q ->data =x;
  q->next =NULL;
  if(n==1)
  {
    q->next = head;
    head = q;
    return head;
  }
  else
  {
  struct Node*p = head;
  int i;
  for(i=0;i<n-2;i++)
  {
    p=p->next;
  }
  q->next= p->next;
  p->next = q;
  return head;
  }
}

struct Node *insertAfter(struct Node *head, int x, int y)
{
	struct Node *q = (struct Node*)malloc(sizeof(struct Node));
	q->data = x;
	q->next = NULL;
	if(head== NULL)
	{
		return head;
	}
	struct Node *p = head;
	while(p!=NULL && p->data!=y)
	{
		p=p->next;
	}
	if(p==NULL) 
	{
		return head;
	}
	if(p->data==y)
	{
		q->next=p->next;
		p->next=q;
		return head;
	}
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

struct Node* deletenodeatposition(struct Node* head, int n)
{
  struct Node *p = head;
  if(n==1)
  {
    head=p->next;
    free(p);
    return head;
  }
  int i;
  for(i=0;i<n-2;i++)
  {
    p=p->next;
  }
  struct Node* q;
  q=p->next;
  p->next=q->next;
  free(q);
  return head;
}

struct Node *deletenodebyvalue(struct Node *s, int x)
{
	struct Node *p, *q;
	p = s;
	q = NULL;
	while(p!=NULL && p->data!=x)
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
	if(p->data==x)
	{
		q->next=p->next;
		free(p);
	}
	return s;
}

struct Node* reverseit(struct Node *head)
{
  struct Node *current, *prev, *next;
  current=head; //Stores address of next node
  prev=NULL; //Stores address of previous node
  while(current!= NULL)
  {
    next= current -> next;
    current->next = prev;
    prev= current;
    current= next;
  }
  head= prev;
  return head;
}

int main()
{
  struct Node* head;
  head= NULL;
  int n;
  do
  {
    printf("\n-----------------\n");
    printf("Type 1 to print the linkedlist\n");
    printf("Type 2 to Insert in the beginning\n");
    printf("Type 3 to Insert in the end\n");
    printf("Type 4 to Insert at a specific location.\n");
    printf("Type 5 to Insert after a specific value in the linkedlist \n");
    printf("Type 6 to delete node at specific point\n");
    printf("Type 7 to delete a node of specific value\n");
    printf("Type 8 to reverse the list iteratively\n");
    printf("Type 9 to print the linkedlist recursively\n");
    printf("Type 10 to print the reversed linkedlist recursively\n");
    printf("Type 11 to count the number of nodes in the linkedlist\n");
    printf("Type 12 to exit\n");
    printf("Please select an option\n");
    scanf("%d",&n);
    if(n==12)
    {
      break;
    }
    switch (n)
    {
    case 1:
      {
        printll(head);
        break;
      }
    case 2:
			{
				int num;
				printf("Enter value you want to add: ");
				scanf("%d", &num);
				head = insertatbeginning(head, num);
				break;
			}
			case 3:
			{
				int num;
				printf("Enter value you want to add: ");
				scanf("%d", &num);
				head = insertatend(head, num);
				break;
			}
      case 4:
      {
        int num, x;
        printf("Where do you want the number to be inserted: \n");
        scanf("%d",&x);
        printf("What number do you want to be inserted.\n");
        scanf("%d",&num);
        head = insertatposition(head, num, x);
        break;
      }
      case 5:
			{
				int x, y;
				printf("Enter value you want to add: ");
				scanf("%d", &x);
				printf("Enter the value after which you want to add: ");
				scanf("%d", &y);
				head=insertAfter(head, x, y);
				break;
			}
      case 6:
      {
        int x;
        printf("Which position do you want deleted?\n");
        scanf("%d",&x);
        head=deletenodeatposition(head,x);
        break;
      }
      case 7:
			{
				int x;
				printf("Enter value you want to delete: ");
				scanf("%d", &x);
				head=deletenodebyvalue(head, x);
				break;
			}
      case 8:
      {
        head = reverseit(head);
        break;
      }
      case 9:
      {
        printf("The list is: ");
        printllrec(head);
        break;
      }
      case 10:
      {
        printf("The reversed list is: ");
        printreversellrec(head);
        break;
      }
      case 11:
      {
        int num = count(head);
        printf("The number of nodes in the list are : %d", num );
        break;
      }
    }
  } while (1);
return 0;
}
