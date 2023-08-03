#include<iostream>
#include<climits>
using namespace std;


bool pairsum(int n, int arr[], int k)
{   

    //2 for loops
    for(int i = 0; i<n; i++)
    {
      for(int j = i+1; j<n; j++){
        if(arr[i]+arr[j]== k){
            cout<<i<<" "<<j<<endl;
            return true;
        }
      }
    }

   


   // // linear way

    // int low = 0;
    // int high = n-1;

    // for(int i = 0; i<n; i++){
    //     if(arr[low]+arr[high] == k){
    //         return true;
    //     }

    //     if(arr[low]+arr[high]>k){
    //         high-= 1;
    //     }

    //      if(arr[low]+arr[high]<k){
    //         low+= 1;
    //     }
            
    // }

 return false;
}



int main(){
    int k;
    cin>>k;
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    bool val;

    val = pairsum(n,arr,k);

    cout<<val;

    return 0;


}