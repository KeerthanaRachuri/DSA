#include<bits/stdc++.h>
using namespace std;


void insertatBottom(stack<int> &s, int ele){
    stack<int> l;
    while(!s.empty()){
        l.push(s.top());
        s.pop();
    }
    s.push(ele);
    while(!l.empty()){
        s.push(l.top());
        l.pop();
    }

}

void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }

    int ele = s.top();
    s.pop();
    reverse(s);
    insertatBottom(s, ele);
    return;
}
//with queues
// void reverse(stack<int> &s){
// queue<int> q;

// while(!s.empty()){
//     q.push(s.top());
//     s.pop();
// }

// while(!q.empty()){
//     s.push(q.front());
//     q.pop();
// }
// return;
// }

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    reverse(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}