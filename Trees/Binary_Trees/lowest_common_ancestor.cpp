#include<bits/stdc++.h>
#include<math.h>
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

// int distance(node* root, node* sub){
//     if(root==NULL){
//         return -1;
//     }
//     if(root==sub){
//         return 1;
//     }

//     return max(distance(root->left, sub), distance(root->right, sub));
// }


// int lowest_common_ancestor(node* root, node* sub1, node* sub2)
// {
//     int dl = distance(root->left, sub1);
//     int dr = distance(root->right, sub2);
//     if(dl==dr){
//         return root->data;
//     }
//     else if(dl==1 && dr==-1){
//         return lowest_common_ancestor(root->left, sub1, sub2);
//     }
//     else if(dl==-1 && dr==1){
//          return lowest_common_ancestor(root->right, sub1, sub2);
//     }
//     return 0;
// }



vector<int> path(node* root, node* sub1){
   vector<int> ans;
   if(root==NULL){
    

   }
   ans.push_back(root);
}
int lowest_common_ancestor(node* root, node* sub1, node* sub2){
    vector<int> path1;
    vector<int> path2;
    path1 = path(root, sub1,path );
    path2 = path(root, sub2, path);
g
}
int main(){
   struct node* root = new node(1);
   root-> left = new node(2);
   root->right = new node(3);
   root->left->left = new node(4);
   root->left->right = new node(5);
   root->right->left = new node(6);
   root->right->right = new node(7);
   node* sub1 = root->right->right->right = new node(8);
   node* sub2 = new node(9);
   cout<<lowest_common_ancestor(root, sub1, sub2);
   return 0;
   
}