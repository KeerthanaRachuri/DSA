#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    int m;
    cin>>n;
    int ld;
    int sum=0;
    m=n;
    while(n>0){
        ld = n%10;
        sum+= pow(ld,3);
        n = n/10;
    }

    if(m==sum){
        cout<<"Given number is an Armstrong Number"<<endl;
    }

    else if(m!=sum){
        cout<<"Given number is not an Armstrong Number"<<endl;
    }

    return 0;
}