#include<bits/stdc++.h>
using namespace std;


vector<int> stock(vector<int> arr, int n)
{
    
    vector<int> ans;
    vector<int> dq;
    
    for(int i=0; i<n ; i++)
    {
        int count = 1;

        if(!dq.empty())
        {
           int j = dq.size()-1;
            while(arr[j]<arr[i] && j>=0)
            { 
                count++;
                j--;
                
            }

        }
        
        
        ans.push_back(count);
        dq.push_back(arr[i]);
    }

    return ans;

}


int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n; i++){
       int a;
       cin>>a;
       arr.push_back(a);
    }

    vector<int> ans = stock(arr, n);

    for(auto i: ans){
        cout<<i<<" ";
    }

    return 0;

}