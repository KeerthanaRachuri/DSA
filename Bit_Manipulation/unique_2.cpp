#include<iostream>
using namespace std;


int setBit(int n, int pos){
    return (n & 1<<pos);
}


int unique_2(int arr[], int n)
{
 int xor_sum=0; 
 for(int i =0; i<n; i++)
 {
    xor_sum =  xor_sum^arr[i];
 }
int setbit = 0;
int pos = 0;
 while(setbit!=1)
 {
  setbit = xor_sum & 1;
  pos++;
  xor_sum>>1;
 }
 int b = 0;
 int a = 0;
 for(int i = 0; i<n; i++){
    if(setBit(arr[i],pos - 1)!= 0){
        b = b ^ arr[i];
    }

    else{
        a = a^arr[i];
    }
 }
  cout<<b<<endl;
 return a ;
 
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }

    cout<<unique_2(arr, n)<<endl;
  
  return 0;
}