#include<bits/stdc++.h>
using namespace std;



void reverse(stack<int> &s, int n){
    if(n==0){
       return;
    }

    int val = s.top();
    s.pop();
    reverse(s, n-1);
    stack<int> a;
    for(int i=0; i<n-1; i++){
         a.push(s.top());
         s.pop();
    }
    s.push(val);
    for(int i=0; i<n-1; i++){
        s.push(a.top());
        a.pop();
    }
}

int main(){
    int n;
    cin>>n;
    stack<int> s;
    int a;

    for(int i=0; i<n; i++)
    {
        cin>>a;
        s.push(a);
    }

    reverse(s, n);

    for(int i=0; i<n; i++){
        cout<<s.top()<<endl;
        s.pop();
    }
  return 0;

}