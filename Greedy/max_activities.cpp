#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<pair<int, int>> time;
    for(int i=0; i<n; i++){
        int a;
        int b;
        cin>>a>>b;
     time.push_back (make_pair (a, b));
    }

    sort(time.begin(), time.end());
    int count = 1;
    
    for(int i=0; i<n-1; i++){
        if(time[i].second<time[i+1].first){
                count++;
        }
    }
    cout<<count;
    return 0;
}