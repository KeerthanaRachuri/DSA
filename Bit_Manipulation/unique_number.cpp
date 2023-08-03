#include<iostream>
using namespace std;

int unique(int* arr, int n){
    int xor_sum = 0;
  for(int i = 0; i<n; i++){
    xor_sum = xor_sum^arr[i];

    return xor_sum;
  }
}

int main(){
 int n;
 cin>>n; 
 int arr[n];

 
 
 for(int i = 0; i<n;i++){
    cin>>arr[i];
 }
  

cout<<unique(arr, n)<<endl;

return 0;
 
}