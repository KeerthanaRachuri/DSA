#include<bits/stdc++.h>
#include<iostream>
using namespace std;

string reverse(string arr, int n){
      string rev;
      for(int i=n-1; i<0; i++){
        rev.push_back(arr[i]);
      }
      return rev;
};

char num_ascii(int n){
    char ch;
    ch = char(55 + n);
    return ch;
}

string decimal_hexadecimal(int n){
    string arr;
    string ans;    
    int num;
    int i = 0;
    while(n>0){
        num = n%16;
        if(num>9){
            arr[i] = num_ascii(num);
            i++;
        }
        else{
            arr[i] = num;
            i++;
        }
        n = n/16;
    }
   
    ans = reverse(arr, i);

return ans;
}

int main(){
    int n;
    cout<<"Enter a decimal number: "<<endl;
    cin>>n;
    cout<<decimal_hexadecimal(n);
    return 0;

}