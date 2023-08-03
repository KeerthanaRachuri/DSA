#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
   const int N = 1e6 +2;

   int idx[N];

   for(int i=0; i<N; i++){
    idx[i] = 1;
   }

   int minidx = N;


for(int i =0; i<n; i++){
    if(idx[arr[i]]>0){
        minidx = min(minidx, i);
    }

    idx[arr[i]] = i; 
}

cout<<minidx;

return 0;
}
