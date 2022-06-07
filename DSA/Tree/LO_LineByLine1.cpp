#include "classtree.cpp"

void printLevelOrder(Node *root){

    if(root==NULL) return;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(q.size()>1){

        Node *curr=q.front();
        q.pop();
        if(curr==NULL){
            cout<<endl;
            q.push(NULL);      // psuhing NULL for end marker after left and right node are pushed.
            continue;
        }
        cout<<curr->data<<" ";

        if(curr->left!=NULL)
        q.push(curr->left);

        if(curr->right!=NULL)
        q.push(curr->right);

    }

}

int main(){

Node *root= new Node(10);

root->left= new Node(15);
root->right=new Node(20);

root->left->left=new Node(30);
root->right->right=new Node(50);
root->right->left=new Node(40);

root->right->left->left=new Node(60);
root->right->left->right=new Node(70);

printLevelOrder(root);

}