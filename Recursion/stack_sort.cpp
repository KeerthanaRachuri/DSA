#include<bits/stdc++.h>
#include<stack>
using namespace std;

void insert(stack<int> &a, int val){


if(a.size()==0 || a.top()<=val){
    a.push(val);
    return;
}

int num = a.top();
a.pop();
insert(a, val);
a.push(num);

return;


}

void sort(stack<int> &s){
    //base
    if((s.size())==1){
        return;
    }

    //hypothesis
   int val = s.top();
    s.pop();

    sort(s);
    insert(s,val);

    return;

}

int main(){
    stack<int> s;
    int n;
    cin>>n;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        s.push(a);
    }

  sort(s);
  int m = s.size();

    for(int i=0; i<m; i++){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;

}