#include<iostream>
using namespace std;

int get_bit(int n, int pos){
    return ((n&(1<<pos))!= 0);

}

int set_bit(int n, int pos){
    int a = (n|(1<<pos));


    return a;
}
int main(){
     cout<<get_bit(8,2)<<endl;
     cout<<set_bit(8,2)<<endl;

     return 0;
}