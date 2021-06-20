#include<bits/stdc++.h>
using namespace std;

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int newdata)
        {
            this -> data = newdata;
            this -> next = NULL;
        }
    };
    class linkedlist
    {
    public:
        int size;
        Node * head;
        linkedlist()
        {
            this->size = 0;
            this->head = NULL;
        } 
    void insertatFront(int data){
        Node * temp = new Node(data);
        if(this-> head!=NULL)
        {
            temp->next = this-> head;
        }
        this-> head = temp;
        this->size = this -> size + 1;
    } 
    void insertatLast(int data)
    {
        Node* temp = new Node(data);
        if(this->head == NULL) this-> head = temp;
        else{
        Node * temp1 = this-> head;
        while((temp1->next)) temp1 = temp1 ->next;
        temp1-> next = temp;
        }
        this->size = this->size+1;
    } 
    void printsize()
    {
        cout<<"The current size of the linked list is "<<this->size<<endl;
    }  

    void printthislist()
    {
        cout<<"List : ";
        Node* temp = this-> head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" -> ";
            temp = temp-> next;
        } 
        cout<<"NULL\n";   
    }
    void insertatpos(int data, int n=1)
    {
    Node* temp = new Node(data);
        if(n ==1)
        {
            if(this->head == NULL) 
            {this -> head = temp;
            }
            else
            {
                temp-> next = this -> head;
                this-> head = temp;
            }
        }
        Node * temp1 = this-> head;
        while((n-2)!=0)
        {
            temp1 = temp1-> next;
            n--;
        }
        temp-> next = temp1->next;
        temp1 -> next = temp;
    this->size = this-> size+ 1;
    }

    int searchpos(int key){
        Node *temp=this-> head;
        int c=0;
        while(temp->data!=key&&temp->next!=NULL){
            temp=temp->next;
            c++;
        }
        if(c==this->size){
            return -1;
        }else{
            return c;
        }

    }

    void deletepos(int pos=1)
    {
    Node* temp = this-> head;
    if(pos==1)
    {

        this->head= temp-> next;
        delete temp;
        this->size -= 1;
        return;
    }
    Node * prev = this-> head;
    while(pos-1!=0)
    {
        prev = temp;
        temp=temp->next;
        pos--;
    }
    prev-> next = temp -> next;
    this->size -= 1;
    delete temp;
    }


    void reverseList(){
        Node *temp=this->head;
        Node *prev=NULL;
        while(temp!=NULL){

            temp=temp->next;
            this->head->next=prev;
            prev=this->head;
            if(temp!=NULL){
                this->head=temp;    
            }
            
        }
    }

    void reversebyrecur(Node* current)
    {
        if(!(current-> next))
        {
            this-> head = current;
            return;
        }
        reversebyrecur(current->next);
        current->next ->next= current;
        current -> next = NULL;
    }

    void loopDetect(){
    Node *slow=this->head;
    Node *fast=this->head;
    while(fast&&slow&&fast->next){
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast){
            cout<<"Loop detected"<<endl;
            return;
        }
    }
    cout<<"NO loop"<<endl;
    return;
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
    linkedlist *llist = new linkedlist();
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        llist->insertatLast(b);
        llist->insertatFront(a);
    }
    llist->printthislist();
    llist->printsize();
    int c,d;
    cin>>c>>d;
    llist->insertatpos(c,d);
    llist->printthislist();
    llist->printsize();
    int e,f;
    cin>>e>>f;
    llist->deletepos(e);
    llist->printthislist();
    llist->printsize();
    llist->deletepos(f);
    llist->printthislist();
    llist->printsize();
    llist->reversebyrecur(llist-> head);
    llist->printthislist();
}
