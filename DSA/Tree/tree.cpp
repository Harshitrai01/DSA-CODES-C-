#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int x){
        this->data=x;
        this->left=NULL;
        this->right=NULL;
    }
};

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

void preorder(Node *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

int height(Node *root){
    if(root==NULL)
    return 0;

    else
    return 1+max(height(root->left),height(root->right));
}

// void printKdist(Node *root,int k){
//     if(root==NULL) return;
//     if(k==0) {cout<<root->data<<" ";}
//     else{
//         printKdist(root->left,k-1);
//         printKdist(root->right,k-1);
//     }
// }

int getSize(Node *root){
    if(root==NULL)
        return 0;
    else
    return 1+getSize(root->left)+getSize(root->right);
}

int maxEle(Node *root){
    if(root==NULL)
    return INT_MIN;
    else
    return max(root->data,max(maxEle(root->left),maxEle(root->right)));
}

int minEle(Node *root){
    if(root==NULL)
    return INT_MAX;
    else
    return min(root->data,min(minEle(root->left),minEle(root->right)));
}

int main(){

    Node *root=new Node(20);
    root->left=new Node(10);
    root->right=new Node(5);

    root->left->left=new Node(6);
    root->left->right=new Node(7);

    root->right->left=new Node(21);
    root->right->right=new Node(4);

    cout<<"Inorder : ";
    inorder(root);
    cout<<endl;

    cout<<"Preorder : ";
    preorder(root);
    cout<<endl;

    cout<<"Postorder : ";
    postorder(root);
    cout<<endl;

    cout<<"Height Of Tree : "<<height(root);
    cout<<endl;

    // cout<<"Print kth dist : ";
    // printKdist(root,3);

    cout<<"Size Of Tree : "<<getSize(root);
    cout<<endl;

    cout<<"Maximum Element : "<<maxEle(root);
    cout<<endl;

    cout<<"Minimum Element : "<<minEle(root);
    cout<<endl;

return 0;
}