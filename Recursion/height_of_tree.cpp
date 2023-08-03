#include<iostream>
#include<cmath>

using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int height(struct node* root){
    int ht;
    if(root==nullptr){
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    return max(height(root->left),height(root->right))+1;

}

int main(){
   struct node* root = new node(1);
   root-> left = new node(2);
   root->right = new node(3);
   root->left->left = new node(4);
   root->left->right = new node(5);
   root->right->left = new node(6);
   root->right->right = new node(7);


    //           1
    //        /   \ 
    //       2     3
    //      / \   / \
    //     4   5 6   7

    cout<<height(root)<<endl;

    return 0;


   
}