#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int x){
        this->data=x;
        this->next=NULL;
    }
};

// Traversal
void print(Node *head){
    Node *curr=head;
    cout<<"Traversal of LL"<<endl;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

// Recursive Traversal
void rPrint(Node *head){
    if (head==NULL)
        return;
    cout<<head->data<<" ";
    rPrint(head->next);
}

// Reverse Traversal
void revPrint(Node *head){
    if (head==NULL)
        return;
    revPrint(head->next);
    cout<<head->data<<" ";
}

// Insert at begin()
Node *insert_begin(Node *head,int x){
    Node *temp= new Node(x);
    temp->next=head;
    return temp;
}

// Insert at end
Node *insert_end(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL)
    return temp;

    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

// Delete at begin();
Node *delete_begin(Node *head){
    if(head==NULL)
    return NULL;
    Node *temp=head->next;
    delete head;
    return temp;
}

// Delete at end();
Node *delete_end(Node *head){
    if(head==NULL)
    return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node *curr=head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    delete curr->next;
    curr->next=NULL;
    return head;
}

//Insert at pos x();
Node *insert_at_pos(Node *head, int x, int pos){
    Node *temp= new Node(x);

    if(pos==1){
        temp->next=head;
        return temp;
    }

    Node* curr=head;
    int i=0;
    while (i<pos-2 and curr!=NULL)
    {
        curr=curr->next;
        i++;
    }

    if(curr==NULL)
        return head;

    temp->next=curr->next;
    curr->next=temp;
    return head;
}

//search in a linked list
int search(Node *head, int x){

    int pos=1;
    Node* curr=head;
    while(curr!=NULL){
        if(curr->data==x)
            return pos;

        else{
            pos++;
            curr=curr->next;
        }
    }
    return -1;
}

int main(){
    // Creation Of Nodes and Linking;

    // M1 of Linking
    Node *node1= new Node(10);
    Node *node2= new Node(20);
    Node *node3= new Node(30);
    node1->next=node2;
    node2->next=node3;

    // cout<<node1->data<<endl;
    // cout<<node2->data<<endl;
    // cout<<node3->data<<endl;

    // cout<<node1->next<<endl;
    // cout<<node2->next<<endl;
    // cout<<node3->next<<endl;

    

    //M2 of Linking
    Node *node4=new Node(40);
    node3->next=node4;
    node4->next= new Node(50);
    node4->next->next= new Node(60);

    // cout<<node4->data<<endl;
    // cout<<node4->next->data<<endl;
    // cout<<node4->next->next->data<<endl;

    // cout<<node4->next<<endl;
    // cout<<node4->next<<endl;
    // cout<<node4->next<<endl;  

    // Insert at Begning
    node1=insert_begin(node1,5);
    node1=insert_begin(node1,2);

    // Insert at End
    node1=insert_end(node1,70);
    node1=insert_end(node1,80);

    // Delete at begning()
    node1=delete_begin(node1);
    node1=delete_begin(node1);

    // Delete at end();
    node1=delete_end(node1);
    node1=delete_end(node1);

    // Insert Node at middle();
    node1=insert_at_pos(node1,25,2);

    // Traversal Calling:-
    print(node1);
    rPrint(node1);
    cout<<endl<<"Reversal Traversal of LL"<<endl;
    revPrint(node1);
    cout<<endl;
    cout<<search(node1,60);

    return 0;

}