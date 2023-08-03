#include<iostream>
using namespace std;

void prime_factors(int n){

    int spf[n];
    for(int i=2; i<n; i++){
        spf[i]=i;
    }

    for(int i=2; i<=n; i++){
        if(spf[i]==i){
            for(int j = i*i; j<=n; j+=i){
                spf[j]=i;
            }
        }
    }

    while(n!= 1){
        cout<<spf[n]<< " ";
        n = n/spf[n];
    }
  
}

int main(){
    int n; 
    cin>>n;

    prime_factors(n);

    return 0;
}