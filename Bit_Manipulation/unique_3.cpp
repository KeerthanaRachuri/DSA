#include<iostream>
using namespace std;


int getbit(int n, int pos){
return (n & 1<<pos);
}

int setbit(int n, int pos){
    return (n | 1<<pos);
}

int unique_3(int arr[], int n)
{
    int num = 0;
    int bit[64];
        
        for(int j=0;j<64;j++)
        {
            int sum = 0;

        for(int i=0;i<n; i++)
        {
            if(getbit(arr[i], j)){
             sum ++;
            }
        }
        if(sum%3 !=0){
            num = setbit(num, j);
        }
        
    }


    return num;
}

int main(){
     int n;
    cin>>n;
    int arr[n];
    
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }

    cout<<unique_3(arr, n)<<endl;
  
  return 0;
}