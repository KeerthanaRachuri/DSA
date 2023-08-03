#include<iostream>
using namespace std;

int numof1(int n){
    int count = 0;
    while(n){
        n = n & n-1;
        count++;
            }

   return count;
    
}

int main(){
  cout<< numof1(14);

   return 0;
}