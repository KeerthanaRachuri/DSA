#include<iostream>
using namespace std;

int count(int n1, int n2){
    int c5=0;
    int c7=0;
    int c57=0;
    for(int i=2; i<=40;i++){
        if(i%5==0){
            c5++;
        }

        else if(i%7==0){
            c7++;
        }

        else if(i%7==0 && i%5==0){
            c57++;
        }
    }
     int count = c5 + c7 - c57;

    return count;
}

int main(){
    int n1;
    int n2; 
    cin>>n1;
    cin>>n2;

    cout<<count(n1, n2)<<endl;

    return 0;
}