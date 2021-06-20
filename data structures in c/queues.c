//Name- Sparsh Sinha
//Roll no. - 2k19/CO/388
#include<stdio.h>
#define size 20


struct queue
{
	int a[size];
	int front, rear;
};

int delete(struct queue *q)
{
	if(q->rear == q->front)
	{
		printf("Queue is empty\n");
		return -1;
	}
	int t = q->a[q->front];
	q->front = (q->front + 1)%size;
	return t;
}

void insert(struct queue *q, int num)
{
	if((q->rear+1)%size == q->front)
	{
		printf("Queue is full\n");
		return;
	}
	q->a[q->rear] = num;
	q->rear = (q->rear+1)%size;
}


void display(struct queue q)
{
	printf("Current queue: ");
	int i = q.front;
	while(i != q.rear)
	{
		printf("%d ", q.a[i]);
		i = (i+1)%size;
	}
	printf("\n");
}


int main(void)
{
struct queue q;
q.front = 0;
q.rear = 0;
int n;
do
{
	printf("===========\n");
	printf("1.Insert element in the queue\n");
	printf("2.Delete element from the queue\n");
	printf("3.Display the queue\n");
	printf("4.Exit\n");
	printf("Enter the option you wish to select\n");
	scanf("%d", &n);
	if(n == 4)
	{
		break;
	}
	switch(n)
	{
	case 1:
	{
		int num;
		printf("Enter the element to be inserted: ");
		scanf("%d", &num);
		insert(&q, num);
		break;
	}
		case 2:
		{
			int x = delete(&q);
			printf("Element that has been deleted: %d\n", x);
			break;
		}	
		case 3:
		{
			display(q);
			break;
		}
		default:
		{
			printf("Please enter correct option\n");
			break;
		}
	}

}while(1);
}