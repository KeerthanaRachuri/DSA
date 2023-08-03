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

int count_nodes(node* root){
    if(root==NULL){
        return 0;
    }
    return count_nodes(root->left) + count_nodes(root->right)+ root->data;
    
}


int main(){
   struct node* root = new node(1);
   root-> left = new node(2);
   root->right = new node(3);
   root->left->left = new node(4);
   root->left->right = new node(5);
   root->right->left = new node(6);
   root->right->right = new node(7);
   root->right->right->left = new node(8);
   cout<<count_nodes(root);
   return 0;
}