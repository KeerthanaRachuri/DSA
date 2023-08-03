#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
    cin>> arr[i];
    }
    int count = 1;
    while(count>0){
        count=0;
        for(int i = 0;i<n; i++){
            if(arr[i+1]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                count++;
        
            }
        }
          
    }
     for(int j = 0; j<n; j++){
    cout<<arr[j];
    }
 return 0;
    }
