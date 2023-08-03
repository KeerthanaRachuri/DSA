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


int search(int* arri, int start, int end, int curr){
    for(int i= start; i<=end; i++)
    {
        if(arri[i]==curr){
            return i;
        }
    }
    return -1;
}


node* buildtree(int* post_order, int* in_order, int start, int end){
    static int idx = 6;
     if(start>end){
        return NULL;
    }
    int curr = post_order[idx];
    node* root = new node(curr);
    idx--;
    
   
    if(start==end){
        return root;
    }
    int pos = search(in_order, start, end, curr);
    root->right = buildtree(post_order, in_order, pos+1, end);
    root->left = buildtree(post_order, in_order, start, pos-1);

    return root;
}

void inorder(node* root)
    {
        
    
        if(root==NULL){
            return;
        }
        
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
       
        return;
    }

int main(){
    int post_order[7] = {4,5,2,6,7,3,1};
    int in_order[7] = {4,2,5,1,6,3,7};
    int start = 0;
    int end = 6;
    node* root = buildtree(post_order, in_order, start, end);
    inorder(root);
    return 0;
}
