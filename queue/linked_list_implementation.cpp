#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    
    node(int val){
        data=val;
        next=NULL;
    }
};

class queue{
    node* front;
    node* back;
    
    public:
    queue(){
        front = NULL;
        back = NULL;
    }

    void insert(int a){
        node* n = new node(a);
         if(front==NULL){
            front = n; 
            back=n;
            return;
        }
        
        back->next = n;
        back = n;

        return;

    }

    void dequeue(){
        if(front==NULL || front==back->next){
            cout<<"No elements in queue to remove"<<endl;
            return;
        }

        node* todelete = front;
        front = front->next;
        delete todelete;
        return;
    }

    void peek(){
        if(front==NULL){
            cout<<"No elements in queue to peek"<<endl;
            return;
        }
        cout<<front->data<<endl;
        return;
    }

    bool empty()
    {
        if(front==NULL){
            return true;
        }
        return false;
    }


};


int main(){
    queue q;
    q.insert(1);
    q.insert(2);
    q.peek();
    q.dequeue();
    q.peek();
    q.insert(3);
    q.dequeue();
    q.peek();
    q.dequeue();
    q.peek();
    cout<<q.empty()<<endl;
    return 0;

}