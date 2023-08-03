#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> i1, pair<int,int> i2){
    return (i1.first/i1.second)>(i2.first/i2.second);
}
int main(){
    
    int w;
    cin>>w;
    int n;
    cin>>n; 
    vector<pair<int,int>> bag;
    //first value second weight
    for(int i=0;i<n; i++){
        int a,b;
        cin>>a>>b;
        bag.push_back(make_pair(a,b));
    }
    sort(bag.begin(), bag.end(), compare);

    int weight = 0;
    int value = 0;
    for(int i=0; i<n; i++){
        weight+=bag[i].second;
        if(w<weight){
        
            value+= (bag[i].first/bag[i].second)*(bag[i].second - (weight-w));
            break;
        }
        value+=bag[i].first;
    }
    cout<<value<<endl;
    return 0;
}
