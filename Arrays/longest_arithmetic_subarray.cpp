#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int arr[n];
    vector<int> art;

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int pd;
    int current;
    int count = 3;
    int temp = 0;

    for(int i = 1; i<n; i++){
        pd = arr[i] - arr[i-1];
        current= arr[i+1] - arr[i];


        if(current==pd){
            count++;
        }

        else if (current!= pd){
            if(count>temp){
               temp = count;
            }
            count = 2;
            break;
        }
      
    

    }

    cout<<temp;

    return 0;
    }

    
