#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
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


 void display(node* head)
 {
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
       temp= temp->next;
    }
    cout<<"NULL"<<endl;
    return;
}


void deletion(node* &head, int key){
        node* temp = head;
    while(temp->next!=NULL){
       if(temp->next->data==key){
        temp->next = temp->next->next;
        break;
       }
       temp = temp->next;
    }
  return;
}

bool search(node* head, int key){
    node* temp = head;
    while(temp!=NULL){
      if(temp->data == key){
        return true;
      }
      temp = temp->next;
    }

return false;
}






node* reverse(node* &head){
 
  node* prev = NULL;
  node* current = head;
  node* nex;
  while(current!=NULL){
   nex = current->next;
   current->next = prev;
    
 
  prev = current;
  current = nex;
  }

  return prev;
}


node* reverserecursive(node* &head)
{

  if(head->next==NULL|| head==NULL){
        return head;
  }



node* newhead = reverserecursive(head->next);
head->next->next = head;
head->next = NULL;

return newhead;
}


int main(){
 node* head = NULL;

 insert(head, 1);
 insert(head,2);
 insert(head,3);
 insert(head,4);
 insert(head,5);
 insert(head,6); 
 display(head);

 node* newhead = reverserecursive(head);
 display(newhead);


 return 0;
}