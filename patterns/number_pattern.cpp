#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 1; i<=n; i++){
        for(int j=1; j<=n-i;j++){
            cout<<" ";
        }
        int count=1;
        for(int j = 1; j<2*i; j++){
            
            if(j%2==0){
                cout<<" ";
            }
            else if(j%2!=0){
                cout<<count;
                count++;
            }
        }
        cout<<"\n";
    }
}