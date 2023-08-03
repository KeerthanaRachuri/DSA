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
void even_odd(node* &head){
    node* oddstart =head;
    node* evenstart=head->next;

    while(oddstart!=NULL ){
        oddstart->next=oddstart->next->next;

    }
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
 return 0;
}