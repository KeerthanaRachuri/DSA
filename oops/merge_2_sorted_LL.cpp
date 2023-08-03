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



node* merge(node* &head1, node* &head2)
{
    node* temp1 = head1;
    node* temp2= head2;
    node* nextptr;
    node* prev_temp1 = NULL;
    node* newhead;
    if(head1->data<=head2->data){
      newhead = head1;
    }

    else{
        newhead = head2;
    }

    while(temp2!=NULL){
     if(temp1->data>=temp2->data)
     {    
         prev_temp1->next = temp2;
         nextptr = temp2->next;
         temp2->next = temp1;
         
         prev_temp1 = temp2;
         temp2 = nextptr;
         
          
     }
      prev_temp1 = temp1;
      temp1 = temp1->next;
      
    }


    
      return newhead;
}

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



int main(){
  node* head1 =NULL;
  node* head2 = NULL;
    insert(head1,1);
    insert(head2,2);
    insert(head1,3); 
    insert(head2,4);  
    insert(head1,5);
    insert(head1,6);
    
    display(head1);
    display(head2);
    node* newhead = merge(head1, head2);
    cout<<newhead;
    display(newhead);
    
    return 0;
  
}