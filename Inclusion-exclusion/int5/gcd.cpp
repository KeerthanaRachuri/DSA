#include<iostream>
using namespace std;

int gcd(int n1, int n2){
    int n;
 while(n!=0){
   
   if(n2>n1)
   {
    swap(n1, n2);
   }
    n=n1-n2;
    n1=n2;
    n2=n;
 }

 return n1;
}


int main(){
    int n1, n2;

    cin>>n1;
    cin>>n2;

    cout<<gcd(n1, n2)<<endl;

    return 0;
}