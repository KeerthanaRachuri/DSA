#include<bits/stdc++.h>
using namespace std;


int abs(int n, int m){
    if(n>=m){
        return n-m;
    }
    else{
        return m-n;
    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {   
        int n;
        int k;
        cin>>n>>k;
        int arr[n];
        for(int j=0; j<n; j++){
            cin>>arr[i];
        }

    
        multiset<pair<int,int>,greater<int>>ans;
        ans.insert(make_pair(abs(arr[1]-arr[0]), arr[0]));
        int l=1;
        while(l<n-1)
        {
            ans.insert(make_pair(abs(arr[l-1]-arr[l]),arr[l]));
            ans.insert(make_pair(abs(arr[l+1]-arr[l]), arr[l]));

            l++;
        }
        ans.insert(make_pair(abs(arr[l-1]-arr[l]), arr[l]));

        
    }
}