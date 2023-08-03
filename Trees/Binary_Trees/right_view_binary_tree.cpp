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

int height(node* root){

    if(root==NULL){
        return 0;
    }

    return (max(height(root->left), height(root->right))) + 1;
}

void right_view(node* root){

    cout<<root->data<<" ";
    if(root->right==NULL && root->left==NULL){
        return;
    }

    if(root->right==NULL){
        right_view(root->left);
        return;
    }


    right_view(root->right);
    return;


}

void left_view(node* root){

    cout<<root->data<<" ";
    if(root->right==NULL && root->left==NULL){
        return;
    }

    if(root->left==NULL){
        left_view(root->right);
        return;
    }


    left_view(root->left);
    return;

}


int main(){
   struct node* root = new node(1);
   root-> left = new node(2);
   root->right = new node(3);
   root->right->right= new node(4);
   root->left->right = new node(5);
   root->right->left = new node(6);
   root->right->right->right = new node(7);
   root->right->right->left = new node(8);

   right_view(root);
   cout<<endl;
   left_view(root);
  
   return 0;
}