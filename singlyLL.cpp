#include<bits/stdc++.h>
using namespace std;

class node{

    public:
    int data;
    node* next;

    // comstructor
    node(int data){
        this->data=data;
        this->next=NULL;
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
    
    void insertathead(node* &head,int d){
        node* temp = new node(d);
        temp->next = head;
        head = temp;
    }
    void insertattail(node* &tail,int d){
        node* temp = new node(d);
        tail->next = temp;
        tail= temp;
    }
    void print(node* &head){
        node* temp = head;
        
        while(temp!=NULL){
            cout<< temp->data<< " "; 
            temp= temp->next;
        }
        cout<< endl;
    }
    void inseratposition(node* &tail, node* &head, int position,int d){
        
        // insert at start
        if(position==1){
            insertathead(head, d);
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
            insertattail(tail,d);
            return;
        }
        // creating a node for d
        node* nodetoinsert= new node(d);

        nodetoinsert->next = temp->next;
        temp->next = nodetoinsert;
    }
    void deletenode(int position, node* &head, node* &tail){
        // deleating first node
        if(position==1){
            node* temp= head;
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

            prev-> next = curr->next;
            if(curr == tail){
                tail=prev;
            }
            curr->next = NULL;
            delete curr;
        }
    }
    
node* floydDetectLoop(node* head){
    if(head==NULL){
        return NULL ;
    }

    node* slow= head;
    node* fast= head;

    while(fast!=NULL && slow!=NULL){
        slow = slow->next;
        fast = fast-> next;
        if(fast!=NULL){
            fast =fast-> next;
        }

        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}
node* getstartingmode(node* head){
    if(head==NULL){
        return NULL ;
    }
    node* intersect = floydDetectLoop(head);
    node* slow = head;

    while(slow!= intersect){
        slow= slow-> next;
        intersect = intersect-> next;
    }
    return slow;
}
void removeloop(node* head){
    if(head==NULL){
        return;
    }

    node* startOfloop= getstartingmode(head);
    node* temp = startOfloop;
    
    while(temp->next != startOfloop){
        temp = temp-> next;
    }
    temp-> next = NULL;
}

int main(){
    // creating a new node
    node* node1=new node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // head pointed to node1
    node* head =node1;
    node* tail =node1;
    
    print(head);

    insertattail(tail, 12);
    print(head);

    insertattail(tail, 15);
    print(head);

    inseratposition(tail, head, 4, 20);
    print(head);

    deletenode(4,head, tail);
    print(head);

    cout<< "head " << head-> data<< endl;
    cout<< "tail " << tail-> data<< endl;


    return 0;
}