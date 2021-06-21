#include<bits/stdc++.h>
using namespace std;

#define Maxsize 100
int A[Maxsize];
int top = -1;

struct Node{
	int data;
	Node* next;
};
struct Node* topll = NULL;

void Pushll(int x)
{
	Node* temp = new Node();
	temp->data = x;
	temp -> next = topll;
	topll = temp;
}

void popll()
{
	Node* temp;
	if(topll==NULL) 
	{
		cout<<"Nothing to pop \n";
		return;
	}
	temp = topll;
	topll = topll -> next;
	delete temp;
}


int toparr()
{
	if(top<0) return -1;
	return A[top];
}
void Pusharr(int x)
{
	if(top==Maxsize -1) 
	{
		cout<<"Stack overflow\n"; return ;
	}
	A[++top]=x;
}

bool isempty()
{
	if(top==-1) return true;
	return false;
}

void Poparr()
{
	if(isempty())
	{
		cout<<"stack empty\n";
		return;
	}
	top--;
}

void Print()
{
	cout<<"stack is : ";
	for(int i =top;i>=0;i--)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
}
void reversestring( string &s, int n)
{
	stack<char>sol;
	for(int i=0;i<n;i++)
	{
		sol.push(s[i]);
	}
	for(int i =0;i<n;i++)
	{
		s[i]= sol.top();
		sol.pop();
	}
}

void reversealinkedlist()
{
	if (!head) return;
	stack<struct Node*> S;
	Node *temp = head;
	while(temp)
	{
		S.push(temp);
		temp = temp -> next;
	}
	temp = S.top(); 
	head = temp;
	S.pop();
	while(!(S.empty()))
	{
		temp -> next = S.top();
		S.pop();
		temp = temp -> next;
	}
}

int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
  
	#ifndef ONLINE_JUDGE 
	    freopen("input.txt", "r", stdin); 
	    freopen("output.txt", "w", stdout); 
	#endif
	// int n;
	// cin>>n;
	// while(n--)
	// {
	// 	int a;
	// 	cin>>a;
	// 	Pusharr(a);
	// }
	// cout<<toparr()<<endl;
	// Print();
	// Poparr();
	// cout<<toparr()<<endl;
	// Print();
	// Poparr();
	// cout<<toparr()<<endl;
	// Print();
	// Poparr();
	// cout<<toparr()<<endl;
	// Print();
	string s;
	cin>>s;
	cout<<s<<endl;
	reversestring(s,s.length());
	cout<<s<<endl;
}