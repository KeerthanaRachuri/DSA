#include<bits/stdc++.h>
using namespace std;



void del_mid(stack<int> &s, int k){
 
  if(k==1){
    s.pop();
    return;
  }

  int val = s.top();
  s.pop();
  del_mid(s, k-1);
  s.push(val);
  return;
}

int main(){
    int n;
    cin>>n;
    stack<int> s;
    int a;

    for(int i=0; i<n; i++){
        cin>>a;
        s.push(a);
    }

  int k = n/2 + 1;
   del_mid(s, k);
  
   int m = s.size();
   for(int i=0; i<m; i++){
    cout<<s.top()<<endl;
    s.pop();
   }

    return 0;
}