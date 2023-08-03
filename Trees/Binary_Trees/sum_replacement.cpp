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


void sum_replacement(node* root)
{
    if(root==NULL){
        return;
    }
    sum_replacement(root->left);
    sum_replacement(root->right);
    if(root->left!=NULL){
        root->data+= root->left->data;
    }

    if(root->right!=NULL){
        root->data+= root->right->data;
    }
    return;

}

void in_order(node* root)
    {
        
    
        if(root==NULL){
            return;
        }
        
        in_order(root->left);
        cout<<root->data<<" ";
        in_order(root->right);
       
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
   sum_replacement(root);
   in_order(root);
   return 0;
}