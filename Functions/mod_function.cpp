
#include<iostream>
using namespace std;

long p = 1e9+7;

long modMul(int x,int a,int p){
    long res=0;
    x%=p;

    while(a){
        if(a%2)
            res = (res+x)%p;
        x = (2*x)%p;
        a >>= 1;
    }
    return res;
}

long modPow(long x,long a,long p){
    long ans=1;
    while(a){
        if(a%2)
            ans = modMul(ans,x,p); //(ans*x)%p;
        
            a/=2;
            x = modMul(x,x,p); //((x%p) *(x%p))%p;
        }
    
    return ans;
}

long modInv(long x,long p){
    long ans = modPow(x,p-2,p);
    return ans%p;
}

