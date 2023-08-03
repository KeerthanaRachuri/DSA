#include<iostream>
#include<stack>
using namespace std;
#define n 100



class queue{
    stack<int> st;
    int front;
    int back;

    public:
    queue()
    {
        front=-1;
        back=-1;
    }

    void push(int a){
        if(front==-1){
            front++;
        }
        st.push(a);
        back++;
        return;
        
    }
    void pop(){
        stack<int> temp;
        while(st.size()!=1){
            temp.push(st.top());
            st.pop();
        }
        st.pop();
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        return;
    }

    void peek(){
         stack<int> temp;
        while(st.size()!=1){
            temp.push(st.top());
            st.pop();
        }
        cout<<st.top()<<endl;
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        return;

    }

    bool empty(){

        return st.empty();
    }


};

int main(){
    queue q;
    q.push(1);
    q.peek();
    cout<<q.empty()<<endl;
    q.push(2);
    q.pop();
    q.peek();
    q.pop();
    cout<<q.empty()<<endl;
    return 0;
}
