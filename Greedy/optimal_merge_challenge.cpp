#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> comp;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        comp.push_back(a);
    }

    sort(comp.begin(), comp.end());
    
    while(comp.size()!=1){
        int m = comp.size();
        if(m%2==0)
        {
            for(int i=0;i<m; i++)
            {
                
            }
        }
    }
    


}
