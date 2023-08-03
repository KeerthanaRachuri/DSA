#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data = val;
        next=NULL;
        prev= NULL;
    }

};

 void insert(node* &head, int val){

        
       node* n = new node(val);
       node* temp = head;
       if(temp==NULL){
        head = n;
        return;
       }
       while(temp->next!=NULL){
        temp = temp->next;
       }

       temp-> next = n;
       return;

    }

 void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
       temp= temp->next;
    }
    cout<<"NULL"<<endl;
    return;
}

node* reverse(node* &head){
 node* prev = NULL;
 node* curr = head;
 node* nex;
 while(curr!=NULL){
    nex = curr->next;
    curr->next = prev;
   

    prev = curr;
    curr=nex;
    
 }
  return prev;
}




node* append(node* &head, int k){
    node* temp = head;
    int length=1;

    
    while(temp->next!=NULL){
        temp=temp->next;
        length++;
    }
    
   
   node* newhead;

   if(length>k){
   temp->next = head;
   int count = 0;
    while(length-count!=k){
        temp=temp->next;
        count++;
    }
   newhead = temp->next;
    temp->next =NULL;
   }

   else {
     newhead = reverse(head);
   

   }

return newhead;


}
int main(){
    node* head =NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3); 
    insert(head,4);  
    insert(head,5);
    insert(head,6);

    node* newhead = append(head,11);
    display(newhead);
    return 0;
}