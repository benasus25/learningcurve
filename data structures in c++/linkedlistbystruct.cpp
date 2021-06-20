#include<bits/stdc++.h>
using namespace std;

struct Node {
        int data;
        Node* next;
    };

    Node *head = NULL;

void InsertatStart(int data){
    Node* temp = new Node();
    temp ->data = data;
    temp -> next = NULL;
    if(head){
        temp->next = head;
    }
    head= temp;
    }

    void printthislist() {
    ///Function to traverse the list & print it.
    Node* temp = head;
    cout<<"List is: ";
    while (temp != NULL) {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    }

void insertatEnd(int data)
{
    Node* temp = new Node();
    temp ->data = data;
    temp ->next = NULL;
    if(head == NULL)
    {
        head = temp;
    }
    else{
    Node * temp1 = head;
    while((temp1-> next))
    {
        temp1 = temp1 -> next;
    }
    temp1 -> next = temp;
    }
}
void Insertatpos(int value, int pos) {
    ///Inserts a node at the n th position (1 based indexing).
    Node* new_node = new Node();
    new_node->data = value;

    if (pos == 1) {
        new_node->next = head;
        head = new_node;
        return;
    }

    Node* temp = head;
    for (int i = 0; i < pos-2 && temp != NULL; i++) {
        temp = temp->next;
        //cout<<"Currently at node "<<i<<endl;
    }
    if (temp != NULL) {
        new_node->next = temp->next;
        temp->next = new_node;
    }
    else {
        cout<<"Position out of bounds."<<endl;
    }
}
void deletepos(int pos=1)
{
    Node* temp = head;
    if(pos==1)
    {
        head= temp->next;
        delete temp;
    }
    Node * prev = head;
    for(int i=0;i<pos-2&& prev != NULL;i++)
    {
        prev= prev -> next;
    }
    if (prev== NULL || prev->next == NULL || pos <= 0) {
        cout<<"Entered index out of bounds."<<endl;
        return;
    }
    temp = prev -> next;
    prev-> next = temp-> next;
    delete temp;

}
void Clear_heap() {
    ///Function to clear the allocated memory.
    Node* temp = head;
    while (temp != NULL) {
        head = head->next;
        delete temp;
        temp = head;
    }
}

void Print_recursive(Node* current) {
    cout<<current->data<<" -> ";
    if (current->next != NULL)
        Print_recursive(current->next);
}

void Print_recursive_reverse(Node* current) {
    if (current->next != NULL)
        Print_recursive_reverse(current->next);
    cout<<current->data<<" -> ";
}

void Reverse() {
    Node * current, *prev, *next;
    current = head;
    prev = NULL;
    while(current)
    {
        next = current -> next;
        current->next = prev;
        prev= current;
        current = next;
    }
    head= prev;
}

void reversebyrecur(Node* current)
{
    if(!(current->next))
    {
        head= current;
        return;
    }
    reversebyrecur(current-> next);
    current->next->next = current;
    current->next = NULL;
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
		int a,b;
		cin>>a>>b;
        insertatEnd(a);
		InsertatStart(b);
	}
    printthislist();
    int c,d;
    cin>>c>>d;
    Insertatpos(d,c);
    printthislist();
    int e,f;
    cin>>e>>f;
    deletepos(e);
    printthislist();
    deletepos(f);
    printthislist();
    reversebyrecur(head);
    printthislist();
}
