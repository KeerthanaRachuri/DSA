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

void insertattail(node* &head, int val){
   node* n = new node(val);
   node* temp = head;
   if(head==NULL){
    head = n;
    return;
   }
   while(temp->next!=NULL){
    temp= temp->next;
   }
   temp->next = n;
   return;
}

node* reversek(node* & head, int k){
  node* prevptr = NULL;
  node* crrntptr = head;
  node* nextptr;
int count = 0;
  while(count<k && crrntptr!=NULL){
   nextptr = crrntptr->next;
   crrntptr->next = prevptr;

   prevptr = crrntptr;
   crrntptr =nextptr;
   count++;
  }
  if(nextptr!=NULL){
    head->next = reversek(nextptr, k);
  }


  return prevptr;
}



void display(node* head){
 node* temp = head;
 while(temp!=NULL){
    cout<<temp->data<<"->";
    temp= temp->next;
 }
 cout<<"NULL"<<endl;
 }


 

 int main(){
    node* head=NULL;
    int n;
    cin>>n;
    int a;
    for(int i=0; i<n; i++)
    {
     cin>>a;
     insertattail(head, a);
    }
     display(head);
    node* newhead = reversek(head, 2);
   
    display(newhead);
    return 0;

 }


