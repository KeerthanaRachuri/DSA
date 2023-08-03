#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // int sub_arr;
    
    for(int i = 0; i<n; i++)
    {
        int temp = 0;
        for(int j = i; j<n; j++){
           temp+= arr[j];
         cout<<temp;
         cout<<" ";

    //    temp+= arr[j];
    //    sub_arr.push_back(temp);
        }
    }

//    for(int j = 0; j<sizeof(sub_arr); j++ ){
//     cout<<sub_arr[j];
//     cout<<" ";
//    } 

   return 0;
}