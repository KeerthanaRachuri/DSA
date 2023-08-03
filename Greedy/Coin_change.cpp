#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n, greater<int>());
     for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        ans+= x/arr[i];
        x-= (x/arr[i])*arr[i];

    }
    cout<<ans<<endl;
    
    return 0;
}