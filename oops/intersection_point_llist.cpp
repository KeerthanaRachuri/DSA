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

    void intersect(node* &head1, node* &head2, int n){
        node* temp1 = head1;
        for(int i=0; i<n; i++){
          temp1 = temp1->next;
        }
        node* temp2= head2;
        while(temp2->next!=NULL){
         temp2 = temp2->next;
        }
        temp2->next = temp1;

    }

int start_node(node* &head){
    node* rab = head;
    node* tort = head;
    while(tort!=NULL && rab!=NULL){
        tort=tort->next;
        rab= rab->next->next;
        if(rab==tort){
            break;
        }
    }
    rab = head;
    while(tort->next!=rab->next){
        tort = tort->next;
        rab = rab->next;
    }

    int ans = rab->next->data;
    tort->next=NULL;
    
    return ans;
}



int intersection(node* &head1, node* &head2){
   node* temp1 = head1;
   node* temp2 = head2;

   while(temp1->next!=NULL){
    temp1= temp1->next;
   }
   temp1->next = head2;

   return start_node(head1);


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
    node* head1= NULL;
    node* head2 = NULL;
    insert(head1, 1);
    insert(head1, 2);
    insert(head1, 3);
    insert(head1, 4);
    insert(head1, 7);
    insert(head1, 5);
    insert(head1, 6);
    insert(head2, 9);
    insert(head2, 10);

   intersect(head1, head2, 4);
   display(head1);
   display(head2);
   cout<<intersection(head1, head2);
    
    return 0;
}
