#include<bits/stdc++.h>
#include<cmath>
using namespace std;


int symbol(int n, int k){
   
    if(n==1 && k==1){
        return 0;
    }
    int mid = pow(2, n-1)/2;
    if(k<=mid){
      return symbol(n-1,k);
    }

    else{
     return !symbol(n-1, k - mid);
    }


    
}



int main(){
    int n;
    int k;
    cin>>n;
    cin>>k;
    if(n>k){
    cout<<symbol(n,k);
    }

    return 0;
}