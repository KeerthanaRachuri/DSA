#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    //testcases
    for(int i=0; i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        int k=0;
        int count=0;
        while(k<n){
            int great = arr[k] & arr[k+1];
            while(great&arr[i+2]<great)
            {
                i+=3;
                count++;
            }
        }
    }
}
