#include<iostream>
using namespace std;

int main(){
    int row, column;
      cin>>row;
      
      
      if(row>0){
        for(int i=1; i<=row; i++){
            int j = 0;
            while(j<=row-i){
                  cout<<"*";
                  j++;
            }
            cout<<"\n";
        }
      }
      return 0;
}