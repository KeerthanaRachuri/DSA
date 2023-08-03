#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int val)
    {data = val;
    prev = NULL;
    next = NULL;
    }
    
};

void insert(node* &head, int val){
    node* n = new node(val);
    node* temp = head;
    
    if(head==NULL){
        head=n;
        return;
    }

    while (temp->next!=NULL){
        temp = temp->next;
    }
    
    n->prev = temp;
    temp->next = n;

    return;

}

void deletion(node* & head, int key){
    node* temp = head;

   while(temp!=NULL){
    if(temp->data ==key){
        if(temp->next==NULL){
            temp->prev->next = NULL;
            delete temp;
            return;
        }
         temp->next->prev = temp->prev;
         temp->prev->next = temp->next;
         delete temp;
         return;
    }
    temp = temp->next;
   }
   return;
}


void display(node* head){
      node* temp = head;
      while(temp!=NULL){
        cout<<temp->data<<"<=>";
        temp= temp->next;
        
      }
      cout<<"NULL"<<endl;
      return;
}

int main(){
    node* head =NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3); 
    insert(head,4);  
    insert(head,5);
    insert(head,6);
    deletion(head,6);
    display(head);
    return 0;
}