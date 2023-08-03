#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int temp=0;
    int count = 0;
    for(int i = 0; i<n; i++){

        if (arr[i]>temp && arr[i]>arr[i+1]){
             count++;
             temp = max(temp, arr[i]);
        }
    }

    cout<<count;

    return 0;
}
