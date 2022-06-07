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

void traverse(Node *head){
    if(head==NULL)
        return;
     
     Node *curr=head;
     do{
         cout<<curr->data<<" ";
         curr=curr->next;
     }while(curr!=head);
    cout<<endl;
}


Node *insert_begin_swap(Node *head, int x){
    Node *temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }

    temp->next=head->next;
    head->next=temp;
    int t=head->data;
    head->data=temp->data;
    temp->data=t;

    return head;
}


Node *insert_begin(Node *head, int x){

    Node *temp = new Node(x);

    if(head==NULL){
        temp->next=temp;
        return temp;
    }

    Node *curr=head;

    while(curr->next!=head){
        curr=curr->next;
    }

    curr->next=temp;
    temp->next=head;
    return temp;


}

Node *insert_end(Node *head, int x){

    Node *temp = new Node(x);

    if(head==NULL){
        temp->next=temp;
        return temp;
    }

    Node *curr=head;

    while(curr->next!=head){
        curr=curr->next;
    }

    curr->next=temp;
    temp->next=head;
    return head;
}

Node *insert_end_swap(Node *head, int x){
    Node *temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }

    temp->next=head->next;
    head->next=temp;
    int t=head->data;
    head->data=temp->data;
    temp->data=t;

    return temp;
}

Node *delete_begin(Node *head){

    if(head==NULL){
        return NULL;
    }

    if(head->next==head){
        delete head;
        return NULL;
    }

    Node *curr=head;

    while(curr->next!=head){
        curr=curr->next;
    }

    curr->next=head->next;
    delete head;
    return curr->next;
}

Node *delete_begin_o1(Node *head){

    if(head==NULL){
        return NULL;
    }

    if(head->next==head){
        delete head;
        return NULL;
    }

    head->data=head->next->data;
    Node *temp=head->next;
    head->next=head->next->next;
    delete temp;
    return head;
}

int main(){

    Node *head= new Node(10);
    Node *node1= new Node(20);
    Node *node2= new Node(30);
    Node *node3= new Node(40);

    head->next=node1;
    node1->next=node2;
    node2->next=node3;
    node3->next=head;

    head=insert_begin(head,9);
    head=insert_begin_swap(head,8);
    head=insert_end(head,41);
    head=insert_end_swap(head,42);
    head=delete_begin(head);
    head=delete_begin_o1(head);

    traverse(head);
    
}