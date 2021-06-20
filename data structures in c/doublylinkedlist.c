#include<stdlib.h>
#include<stdio.h>

struct Node 
{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node *newNode(int x)
{
   struct Node *m = (struct Node*)malloc(sizeof(struct Node));
    m->data=x;
    m->next=NULL;
    m->prev=NULL;
    return m;
}

struct Node *insertathead(struct Node* head, int x)
{
    struct Node *m = newNode(x);
    if(head==NULL)
    {
        head=m;
        return head;
    }
    head->prev=m;
    m->next =head;
    head=m;
    return head;
}
struct Node *insertattail(struct Node* head, int x)
{
    struct Node* temp = newNode(x);
    struct Node* q =head;
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    while(q->next!=NULL)
    {
        q=q->next;
    }
    q->next=temp;
    temp->prev=q;
    return head;
}

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
void reverseprint(struct Node*n)
{
    struct Node* temp = n;
    if(temp ==  NULL)
    {
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    printf("Reverse list is \n");
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}

int main()
{
    struct Node* head =NULL;
   
    head=insertathead(head,2);
    head=insertathead(head,6);
    printll(head);
    reverseprint(head);
    head=insertathead(head,9);
    printll(head);
    reverseprint(head);
    head=insertattail(head,11);
    head=insertattail(head,16);
    printll(head);
    reverseprint(head);
    return 0;
}