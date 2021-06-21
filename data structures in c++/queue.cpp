#include<bits/stdc++.h>
using namespace std;

#define Maxisze 100

class Queue
{
	int A[Maxisze];
	int front , rear;

	public :

	Queue()
	{
		front = -1;
		rear = -1;
	}

	bool Isempty()
	{
		return(front==-1 && rear ==-1);
	}
	bool Isfull()
	{
		return( rear+1)% Maxisze == front ? true :false;
	}
	void Enqueue(int x)
	{
		cout<<"Inserting "<<x<<endl;
		if(Isfull()) 
		{
			cout<<"Queue is full\n";
			return;
		}
		if(Isempty())
		{
			front = rear = 0;
		}
		else 
		{
			rear = (rear +1)%Maxisze;
		}
		A[rear]=x;
	}
	void Dequeue()
	{
		cout<<"deleting elements from the front of the queue\n";
		if(Isempty())
		{
			cout<<"Queue empty, cant delete\n";
			return;
		}
		else if(front==rear)
		{
			rear = front = -1;
		}
		else
		{
			front = (front+1)% Maxisze;
		}
	}
	int Frontelem()
	{
		if(front==-1)
		{
			cout<<"Queue empty\n";
			return -1;
		}
		return A[front];
	}
	void printqueue()
	{
		int count = (rear+Maxisze-front)%Maxisze +1;
		cout<<"Queue is : ";
		for(int i =0;i<count;i++)
		{
			int index = (front+i)%Maxisze;
			cout<<A[index]<<" ";
		}
		cout<<endl;
	}
};

int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
  
	#ifndef ONLINE_JUDGE 
	    freopen("input.txt", "r", stdin); 
	    freopen("output.txt", "w", stdout); 
	#endif
	Queue q;
	int n;
	cin>>n;
	while(n--)
	{
		int a;
		cin>>a;
		q.Enqueue(a);
		q.printqueue();
	}
	int m;
	cin>>m;
	while(m--)
	{
		q.Dequeue();
		cout<<q.Frontelem()<<endl;
		q.printqueue();
	}
}