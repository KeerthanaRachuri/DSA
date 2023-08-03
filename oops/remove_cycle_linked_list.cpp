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
    node* temp = head;
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    return;
}

void make_cycle(node* &head, int pos){
    node* temp =head;
    node* startnode;
    int count = 1;
    while(temp->next!=NULL){
        if(count==pos){
            startnode = temp;
        }

        temp=temp->next;
    }
    temp->next = startnode;

}

bool detection(node* head)
{
    node* jump_1= head;
    node* jump_2 = head;
   
    while(jump_1!=NULL && jump_2!=NULL){

        node* jump_1 = jump_1->next;
        node* jump_2 = jump_2->next->next;
        if(jump_1==jump_2){
            return true;
        
        }
    }
    return false;
}

void remove_cycle(node* &head){
    node* rabbit = head;
    node* tortoise = head;
    
    while(rabbit!=NULL && tortoise!=NULL){
         tortoise = tortoise->next;
         rabbit = rabbit->next->next;
        if(rabbit==tortoise){
            break;
        }
    }
    rabbit=head;

    while(rabbit->next!=tortoise->next){
        rabbit = rabbit->next;
        tortoise = tortoise->next;

    }
    tortoise->next=NULL;
    return;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return;
}



int main(){
    node* head = NULL;
    insert(head,4);
    insert(head,5);
    insert(head,6);
    insert(head,1);
    insert(head,2);
    insert(head,3);
    make_cycle(head,1);
    cout<<detection(head);
    remove_cycle(head);
    display(head);


   return 0;
    
}