#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node *previous;

    Node(int x){
        this->data=x;
        this->next=NULL;
        this->previous=NULL;
    }
};
// Traversing LL
void traverse(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;        

}
//Insert at begning of DLL
Node *insert_begin(Node *head,int data){

    Node *temp= new Node(data);
    if(head==NULL)
    return temp;

    head->previous=temp;
    temp->next=head;

    return temp;

}

//Insert at end of DLL
Node *insert_end(Node *head,int data){
    Node *temp= new Node(data);
    if(head==NULL)
    return temp;

    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }

    curr->next=temp;
    temp->previous=curr;

    return head;
}

// Reverse DLL
Node* reverseDLL(Node * head)
{
    if(head==NULL or head->next==NULL)
        return head;
        
    Node *pre=NULL;
    Node *curr=head;
    
    while(curr!=NULL){
        pre=curr->previous;
        curr->previous=curr->next;
        curr->next=pre;
        curr=curr->previous;
    }
    return pre->previous;
}

// Delete_at_begin_DLL
Node *delete_begin(Node *head){
    if(head==NULL)
    return NULL;

    if(head->next==NULL){
        delete head;
        return NULL;
    }

    else{   

            head->next->previous=NULL;
            Node *temp=head->next;
            delete head;
            return temp; 
    }
}

// Delte_at_end
Node *delete_end(Node *head){
    if(head==NULL)
        return NULL;

    if(head->next==NULL){
        delete head;
        return NULL;
    }

    else{
            Node *curr=head;
            while(curr->next!=NULL){
                curr=curr->next;
            }
            curr->previous->next=NULL;
            delete curr;
            return head;
    }
}

int main(){

Node *head= new Node(10);
Node *node1= new Node(20);
Node *node2= new Node(30);
Node *node3= new Node(40);

head->next=node1;
node1->previous=head;
node1->next=node2;
node2->previous=node1;
node2->next=node3;
node3->previous=node2;

head=insert_begin(head,5);
head=insert_end(head,50);

head=delete_begin(head);
head=delete_end(head);

traverse(head);

head=reverseDLL(head);

traverse(head);

}