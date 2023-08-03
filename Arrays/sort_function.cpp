#include<iostream>
#include<algorithm>
using namespace std;
//failed
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }


    sort(arr.begin(), arr.end(), greater<int>());


    return 0;
    

}