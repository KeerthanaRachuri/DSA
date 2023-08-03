#include<iostream>
using namespace std;

struct node{
    public:
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
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

void post_order(node* root)
    {
        
        if(root==NULL){
            return;
        }
        
        post_order(root->left);
        post_order(root->right);
        cout<<root->data<<" ";
       
        return;
    }

int search(int* arri, int start, int end, int curr){
    for(int i= start; i<=end; i++)
    {
        if(arri[i]==curr){
            return i;
        }
    }
    return -1;
}

node* buildtree(int* arrp, int* arri, int start, int end)
{
   static int idx = 0;
//    if(start>end){
//     return NULL;
//    }
   int curr = arrp[idx];
   idx++;
   node* root = new node(curr);
   int pos = search(arri,start,end, curr);
   if(start==end){
    return root;
   }
   root->left = buildtree(arrp, arri, start, pos-1);
   root->right = buildtree(arrp, arri, pos+1, end);

   return root;  

}




int main(){
   struct node* root = new node(1);
   root-> left = new node(2);
   root->right = new node(3);
   root->left->left = new node(4);
   root->left->right = new node(5);
   root->right->left = new node(6);
   root->right->right = new node(7);
   pre_order(root);
   cout<<endl;
   in_order(root);
   cout<<endl;
   post_order(root);

//    int arrp[7] = {1,2,4,5,3,6,7};
//    int arri[7] = {4,2,5,1,6,3,7};
//    int start = 0;
//    int end = 6;
//    node* root = buildtree(arrp, arri, start, end);
//    in_order(root);
    //           1
    //        /   \ 
    //       2     3
    //      / \   / \
    //     4   5 6   7

    //pre-order traversal

    

return 0;
   
}