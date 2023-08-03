#include<iostream>
using namespace std;


void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp; 
}

int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;

    int* aptr = &a;
    int* bptr = &b;
    swap(aptr, bptr);

    cout<<a;
    cout<<endl;
    cout<<b;

    return 0;
}