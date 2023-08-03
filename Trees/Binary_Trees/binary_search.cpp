#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[] = {1, 2, 4, 4, 4, 5, 7, 9}; //8
    int k = 3;

    int low = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    int high = n-1;
    int mid;
    
    while(low<=high){
        mid = (low+high)/2;
        cout<<low<<"low"<<mid<<"mid"<<high<<"high"<<endl;
        if(low==high){
            break;
        }
        if(high == low+1){
          
            if(arr[low]==k){
                cout<<low;
                break;
            }

            if(arr[high]==k){
                cout<<high;
                break;
            }

            if(arr[high]>k){
                cout<<low;
                break;
            }
            cout<<high;
            break;

        }
        if(low==high){
            break;
        }
        if(arr[mid]==k){
            low = mid;
        }
        if(arr[mid]>k){
            high = mid-1;
        }
        else if(arr[mid]<k){
            low = mid;
        }
    
    }
    
    //cout<<mid;
    return 0;



}