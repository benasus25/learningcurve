#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void Enqueue(int x)
{
	Node* temp = new Node();
	temp -> data =x;
	temp -> next = NULL;
	if(front == NULL && rear == NULL)
	{
		front = temp;
		rear = temp;
		return ;
	}
	rear-> next= temp;
	rear= temp;
}

void Dequeue()
{
	Node* temp = front;
	if(front==NULL)
	{
		cout<<"queue is empty \n";
		 return;
	}
	else if(front == rear)
	{
		front = NULL;
		rear = NULL;
	}
	else
	{
	front = front -> next;
	}	
	delete temp;
}

int Frontelem() {
	if(front == NULL) {
		printf("Queue is empty\n");
		return -1;
	}
	return front->data;
}

void Print() {
	Node* temp = front;
	cout<<"queue is : ";
	while(temp != NULL) {
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
  
	#ifndef ONLINE_JUDGE 
	    freopen("input.txt", "r", stdin); 
	    freopen("output.txt", "w", stdout); 
	#endif
	int n;
	cin>>n;
	while(n--)
	{
		int a;
		cin>>a;
		Enqueue(a);
		Print();
	}
	int m;
	cin>>m;
	while(m--)
	{
		cout<<"Front element is "<<Frontelem()<<endl;
		Dequeue();
		Print();
	}
}