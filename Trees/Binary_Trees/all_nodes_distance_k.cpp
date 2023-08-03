#include<bits/stdc++.h>
using namespace std;

struct node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data= val;
        left=NULL;
        right=NULL;
    }


};

void nodes_k(node* root, node* sub, int k)
{
    if(sub==NULL){
        return;
    }
    if(k==0 && sub!=NULL)
    {
        cout<<sub->data<<" ";
        return;
    }
   nodes_k(root, sub->left, k-1);
   nodes_k(root, sub->right, k-1);
   int m = distance(root, sub);
   
  
   return;
   
}

int main(){
   struct node* root = new node(1);
   root-> left = new node(2);
   node* sub = root->right = new node(3);
   root->left->left = new node(4);

   root->left->right = new node(5);
   root->right->left = new node(6);
   root->right->right = new node(7);
   root->right->right->left = new node(8);
   int k = 2;
   nodes_k(root , sub, k);
   return 0;
}