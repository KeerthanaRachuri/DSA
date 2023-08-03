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


int abs( int x, int y){
    if(x>y){
        return x-y;
    }
    else{
        return y-x;
    }
    return 0;
}

int height(node* root){

    if(root==NULL){
        return 0;
    }

    return (max(height(root->left), height(root->right))) + 1;
}


bool height_balanced(node* root)
{
   if(root==NULL){
    return true;
   }


    if(height_balanced(root->left)==false){
        return false;
    }

    
    if(height_balanced(root->right)==false){
        return false;
    }


    if(abs(height(root->left),height(root->right))<=1)
    {
        return true;
    }
    else{
        return false;
        }
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
   root->right->right->left->left = new node(9);

 
   cout<<height_balanced(root);
   return 0;
}