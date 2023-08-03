#include<iostream>
using namespace std;

int main(){
    int n, count;
    cin>>n;

    for(int i=n; i>=1; i--){
        int count = 1;
        for(int j = 1; j<=i; j++){
            cout<<count;
            cout<<" ";

            count++;
        }
        cout<<"\n";
    }
    return 0;
}