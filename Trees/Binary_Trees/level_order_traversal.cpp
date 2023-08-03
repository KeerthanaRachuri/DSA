#include<bits/stdc++.h>
using namespace std;

struct node{
    public:
    int data;
    struct node* left;
    struct node* right;
    
    node(int val){
        data = val;
        left=NULL;
        right=NULL;
    }
};

void level_traversal(node* root)
{
   queue<node*> q;

   q.push(root);
   q.push(NULL);

   while(!q.empty()){
    node* node = q.front();
    q.pop();
    
    if(node!=NULL){
        cout<<node->data<< " ";
        if(node->left!=NULL){
            q.push(node->left);
           
        }
        if (node->right!=NULL){
            q.push(node->right);
        }
    }

    else if(!q.empty()){
        q.push(NULL);
        cout<<endl;
    }

   }

    
    return;
}


int main(){
   struct node* root = new node(1);
   root-> left = new node(2);
   root->right = new node(3);
   root->left->left = new node(4);
   root->left->right = new node(5);
   root->right->left = new node(6);
   root->right->right = new node(7);
   level_traversal(root);
   return 0;
}
