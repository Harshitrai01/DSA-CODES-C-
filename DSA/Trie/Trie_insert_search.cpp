#include<iostream>
using namespace std;
const int size=26;

class Trie{
    public:
    Trie *child[size];
    bool isEnd;
};

Trie *getNode(void){

    Trie *node=new Trie;

    for(int i=0;i<size;i++){
        node->child[i]=NULL;
    }

    node->isEnd=false;
    return node;
}

Trie *root=getNode();
void insert(string keys){
    Trie *curr=root;

    for(int i=0;i<keys.length();i++){
        int index=keys[i]-'a';
        if(curr->child[index]==NULL)
            curr->child[index]=getNode();
        curr=curr->child[index];
    }
    curr->isEnd=true;
}

bool search(string keys){
    Trie *curr=root;
    for(int i=0;i<keys.size();i++){
        int index=keys[i]-'a';
        if(curr->child[index]==NULL)
            return false;
        curr=curr->child[index];
    }
    return curr->isEnd;

}

int i=0;
Trie *del_key(Trie *root,string keys, int i){

    if(root=NULL) return NULL;
    if(i==keys.length()){
        root->isEnd=false;
        if(isEmpty(root)==true){
            delete (root); root=NULL;
        }
            return root;
    }
    int index=keys[i]-'a';
    root->child[index]=del_key(root->child[index],keys,i+1);

    if(isEmpty(root) and root->isEnd==false){
        delete(root); root=NULL;
    return root;
    }
}


// bool isEmpty(Trie *root){
//     for(int i=0;i<26;i++)
//         if(root->child[i]!=NULL)
//             return false;
//     return true;
// }

bool isEmpty(Trie* root)
{
    for (int i = 0; i < size; i++)
        if (root->child[i])
            return false;
    return true;
}

int main(){

    string arr[]={"hello","there","peacock",
                    "laptop","temple","harshit"};
    int n =sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        insert(arr[i]);
    }

    Trie *root=getNode();
    del_key(root,"hello",0);

    search("hello")? cout << "Yes\n" :
						cout << "No\n";
	search("Hel")? cout << "Yes\n" :
						cout << "No\n";
	search("India")? cout << "Yes\n" :
						cout << "No\n";
	search("harshit")? cout << "Yes\n" :
						cout << "No\n";

    return 0;

}