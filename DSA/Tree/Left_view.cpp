#include "classtree.cpp"

vector<int> leftView(Node *root)
{   
        
   vector<int>v;
   if(root==NULL) return v;
   queue<Node*>q;
   q.push(root);
   while(q.empty()==false){
       int count=q.size();
       for(int i=0;i<count;i++){
           Node *curr=q.front();
           q.pop();
           if(i==0)
           v.push_back(curr->data);
           
           if(curr->left!=NULL)
           q.push(curr->left);
           
           if(curr->right!=NULL)
           q.push(curr->right);
       }
   }
   return v;
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

vector<int>v;
v=leftView(root);
for(auto x:v){
    cout<<x<<" ";
}

return 0;
}