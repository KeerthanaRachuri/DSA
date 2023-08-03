#include<iostream>
using namespace std;

int clear_bit(int n, int pos){

    return(n&(~(1<<pos)));
}

int main(){

    clear_bit(5,2);

    return 0;
    
}