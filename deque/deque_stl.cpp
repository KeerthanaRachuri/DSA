#include<bits/stdc++.h>
using namespace std;


int main(){
    deque<int> de;
    de.push_front(2);
    de.push_front(1);
    de.push_back(3);
    de.push_back(1);
    for(auto i: de){
        cout<<i<<" ";
    }
    return 0;
}