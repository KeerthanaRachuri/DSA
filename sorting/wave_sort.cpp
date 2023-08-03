#include<bits/stdc++.h>
using namespace std;



void wave_sort(int* arr, int n){
    
    for(int i=1; i<=n-1; i+=2){
        if(arr[i]>arr[i-1]){
            swap(arr[i], arr[i-1]);
        }

        if(arr[i]>arr[i+1] && i<=n-2){
            swap(arr[i], arr[i+1]);
        }

    }
    return;
}


int main(){
    int arr[] = {1, 3, 4, 7, 5, 6, 2};
    int n = 7;
    wave_sort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }

return 0;

}
