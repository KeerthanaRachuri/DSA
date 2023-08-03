#include<iostream>
using namespace std;
#define n 100

class queue{
    int* arr;
    int front;
    int back;
    
    public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int a)
    {
        if(back==n-1)
        {
            cout<<"queue overflow"<<endl;
            return;
        }
          
        back++;
        arr[back]=a;

        if(front==-1){
            front++;
        }
       return;
    }

    void pop()
    {
        if(front>back|| front==-1){
            cout<<"No elements in queue"<<endl;
        }
        front++;
        return;

    }

    int peek()
    {
        if(front==-1 || front>back){
            cout<<"No elements in queue"<<endl;
            return -1;
        }
       return arr[front];
    }

    bool empty(){
        if(front>back || front==-1){
            return true;
        }
        
        return false;
    }


};

int main(){
    queue q;
    q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // q.push(5);
    // q.push(6);
    cout<<q.peek();
    // q.pop();
    // cout<<q.peek();
    // cout<<q.empty();
    // q.pop();
    // q.pop();
    // q.pop();
    // q.pop();
    // q.pop();
    // cout<<q.empty();

    return 0;



}