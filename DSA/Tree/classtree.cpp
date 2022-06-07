#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int key){
        this->data=key;
        this->left=NULL;
        this->right=NULL;

    }
};