#include<iostream>
using namespace std;

int main(){
    
    int* ptr;
    int a;
    cin>>a;
    ptr = &a;
    // cout<<ptr<<endl;//address of a
    // cout<<&a<<endl;//address of a
    // cout<<*ptr<<endl;//value of a


//     //arrays

//     int arr[] = {10, 20, 30, 40};
//     cout<<*arr<<endl;
//     int* pt;
//     pt = arr;

//     cout<<pt<<endl;//address

// // printing all the values using pointers
//     for(int i = 0; i<4; i++){
//        cout<<*arr+i<<endl;
//     }



//pointer to pointer
int** q = &ptr;

cout<<*q<<endl;//address of a or storedvalue in pointer, dereferenced 1 time
cout<<**q<<endl;//value of a, dereferenced 2 times

return 0;
}
