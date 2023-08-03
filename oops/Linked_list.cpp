
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

     node(int val){
        data = val;
        next=NULL;
     }
};
   
    void insert(node* &head, int val){

        
       node* n = new node(val);
       node* temp = head;
       if(temp==NULL){
        temp = n;
        return;
       }
       while(temp->next!=NULL){
        temp = temp->next;
       }
       temp-> next = n;
       return;

    }

    void deletion(node* &head, int key){
        node* n = new node(key);
        node* temp = head;
    while(temp->next!=NULL){
       if(temp->next==n){
        temp->next=NULL;
        temp->next=n->next;
        break;
       }
    }
    return;
    }

   void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp-> data<<"->";
       temp= temp->next;
    }
    cout<<"NULL"<<endl;
    return;
   }
int main(){
    node* head = NULL;
    insert(head, 1);
    // insert(head,2);
    // insert(head,3);
    display(head);
    // deletion(head,2);
    // display(head);

    return 0;
}
