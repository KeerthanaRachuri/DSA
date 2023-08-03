#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


for(int i = 1; i<n; i++)
{
    int current = arr[i];
    int j = i-1;
    while(arr[j]>current && j>=0)
    {
       arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = current;

}


 for(int i=0; i<n; i++){
        cout<<arr[i];
    }

    return 0;


    // for(int i=0; i<n; i++){
    //     int current = arr[i];
    //     for(int j = 0; j<i;j++){
    //         if(arr[j]>arr[i] && j+1!= i){
    //             temp = arr[j+1];
    //             arr[j+1] = arr[j];    
    //         }

    //         else if(arr[j]>arr[i] && j+1 == i){
    //             arr[]
    //         }

        
    //     }
    // }

}