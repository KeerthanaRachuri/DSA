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


void pre_order(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    pre_order(root->left);
    pre_order(root->right);
    return;

}

void flatten(node* root)

{
    if(root==NULL){
        return;
    }
    node* save = root->right;
    root->right = root->left;
    root->left = NULL;
    flatten(root->right);
    node* temp = root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    temp->right = save;
    flatten(save);
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
   root->right->right->left = new node(8);
   flatten(root);
   pre_order(root);
   
   return 0;
}