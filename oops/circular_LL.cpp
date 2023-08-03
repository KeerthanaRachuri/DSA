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

void insert(node* &startnode, int val){
    node* n = new node(val);
    node* temp = startnode;
    n->next = startnode;
    if(startnode==NULL){
      startnode = n;
      n->next = n;
      return;
    }

    while(temp->next!= startnode){
    temp = temp->next;
    }
    temp->next = n;
    return;
}

void display(node* head)
 {
    node* temp = head;
    while(temp->next!=head){
        cout<<temp->data<<"->";
       temp= temp->next;
    }
    cout<<temp->data<<endl;
    return;
}


node* deletion(node* &head, int key){
    
   node* prevptr = NULL;
   node* crrntptr = head;
   node* nextptr = head->next;
   node* newhead;

 if(head->data == key){
   node* last = head;
   while(last->next!=head){
      last = last->next;
   }
   last->next = head->next;
   newhead = last->next;
   return newhead;
 }

  else{
  while(nextptr!=head)
  {
    if(crrntptr->data == key){
        prevptr->next = nextptr;
        delete crrntptr;
        break;
    }
     prevptr = crrntptr;
     crrntptr = crrntptr->next;
     nextptr = nextptr->next;
     
  }

  newhead = head;
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
    
    display(head);
    node* newhead = deletion(head,1);
    display(newhead);
    return 0;
}
