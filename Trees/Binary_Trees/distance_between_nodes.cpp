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


node* LCA(int a, int b, node* root)
{
    if(root==NULL){
        return NULL;
    }
    if(root->data==a|| root->data==b){
        return root;
    }
    node* left = LCA(a,b, root->left);
    node* right = LCA(a, b, root->right);

    if(left!=NULL || right!=NULL){
        return root;
    }

    if(left==NULL && right==NULL){
        return NULL;
    }

    if(left!=NULL){
        return LCA(a, b, root->left);
    }

    return LCA(a, b, root->right);

}

int distance(int a, int dist, node* root){
    if(root==NULL){
        return -1;
    }

    if(root->data==a){
        return dist;
    }
    int left = distance(a, dist+1, root->left);
    if(left!=-1){
        return left;
    }
    return distance(a, dist+1, root->right);
}



int distance_nodes(int a, int b, node* root){
    node* lca = LCA(a, b, root);

    int d1= distance(a, 0, lca);
    int d2 = distance(b, 0, lca);
    return d1+d2;

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
   cout<<distance_nodes(2,7, root);
   return 0;
}