#include "classtree.cpp"
int maxlevel=0;
void leftView(Node *root,int level)
{   
        if(root==NULL) return;
        if(maxlevel<level){
            cout<<root->data<<" ";
            maxlevel=level;
        }

        leftView(root->left,level+1);
        leftView(root->right,level+1);

}

void print(Node *root){
    leftView(root,1);
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

print(root);
return 0;
}