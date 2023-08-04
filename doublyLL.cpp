#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* prev;
    node* next;

    // constructor
    node(int d){
        this-> data =d;
        this-> prev = NULL;
        this-> next = NULL;
    }
    // destructor
    ~node(){
        int value = this-> data;
        // memory free
        if (this-> next !=NULL){
            delete next;
            this-> next =NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

// traversing a LL
void print (node* head){
    node* temp= head;

    while(temp!=NULL){
        cout << temp-> data << " ";
        temp = temp-> next;
    }
    cout << endl;
}

// gives length of LL
int getLength(node* head){
    int len=0;
    node* temp= head;

    while(temp!=NULL){
        len++;
        temp = temp-> next;

    }
    return len;

}
void insertathead(node* &tail, node* &head, int d){
    
    if(head==NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else{
        node* temp = new node(d);
        temp-> next = head;
        head-> prev = temp;
        head = temp;
    }
}
void insertattail(node* &tail,node* &head, int d){
    if(tail==NULL){
        node* temp = new node(d);
        tail = temp;
        head = temp;
    }
    else{
        node* temp = new node(d);
        tail-> next = temp;
        temp-> prev = tail;
        tail= temp;
    }
}
void insertatposition(node* &tail, node* &head, int position, int d){
    // insert at start
    if(position==1){
        insertathead(tail, head, d);
        return;
    }
    node* temp = head;
    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    // inserting at last posi
    if(temp->next == NULL){
        insertattail(tail, head, d);
        return;
    }
    // creating a node for d
    node* nodetoinsert= new node(d);

    nodetoinsert->next = temp->next;
    temp-> next-> prev = nodetoinsert;
    nodetoinsert->prev = temp;
    temp->next = nodetoinsert;
}
void deletenode(int position, node* &head, node* &tail){
    // deleating first node
    if(position==1){
        node* temp= head;
        temp-> next-> prev = NULL;
        head = head->next;
        // memory free start node
        temp ->next = NULL;
        delete temp;
    }
    else{
    // deleting middle or last node
        node* curr= head;
        node*prev =NULL;

        int cnt =1;
        while(cnt< position){
            prev = curr;
            curr = curr-> next;
            cnt++;
        }
        curr-> prev = NULL;
        prev-> next = curr->next;
        if(curr == tail){
            tail=prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main(){

    node* head= NULL;
    node* tail= NULL;

    print(head);
    // cout << getLength(head) << endl;

    insertathead(tail, head, 11);
    print(head);
    
    insertathead(tail, head, 12);
    print(head);

    insertathead(tail, head, 13);
    print(head);

    insertathead(tail, head, 8);
    print(head);

    insertattail(tail, head, 25);
    print(head);
    
    insertatposition(tail, head, 2, 100);
    print(head);

    insertatposition(tail, head, 1, 101);
    print(head);

    insertatposition(tail, head, 8, 102);
    print(head);

    cout<< "head "<< head-> data<< endl;
    cout<< "tail "<< tail-> data<< endl;
    
    insertatposition(tail, head, 9, 103);
    print(head);
    cout<< "head "<< head-> data<< endl;
    cout<< "tail "<< tail-> data<< endl;

    deletenode(9, head, tail);
    print(head);
    cout<< "head "<< head-> data<< endl;
    cout<< "tail "<< tail-> data<< endl;





    return 0;
}