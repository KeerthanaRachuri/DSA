#include<bits/stdc++.h>
using namespace std;

int main(){
    // deque<int> q;
    // q.push_front(1);
    // q.push_front(2);
    // q.push_back(3);
    // q.push_back(4);

   
    //sliding window
   
    int n,k;
    cin>>n>>k;
    vector<int> p(n);
    for(auto &i: p){
        cin>>i;
    }

    // vector<int> ans;
    
    // multiset<int, greater<int>> s;
    // int begin=0;
    // while(begin+k<=n)
    // {
    // for(int i=begin; i<begin+k; i++){
    //     s.insert(p[i]);
    // }
   
    // ans.push_back(*s.begin());
    // s.clear();
    // begin++;
    // }

    // for(int i=0; i<ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }


    //deque
    vector<int> ans;
    deque<int> q;
    int begin=0;
    while(begin+k<=n)
    {
    for(int i=begin; i<begin+k; i++)
    {

        if(q.empty()){
            q.push_front(p[i]);
        }

        else if(p[i]>q.front()){
            q.push_front(p[i]);
        }

        else if(p[i]<q.front()){
            q.push_back(p[i]);
        }
    }
   
    ans.push_back(q.front());
    q.clear();
    begin++;
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
   


    return 0;
}