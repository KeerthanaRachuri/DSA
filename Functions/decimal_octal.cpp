#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int decimal_y(int n, int y){
    int sum = 0;
    int num;
    int exp = 0;
    while(n>0){
        num = n%y;
        sum+= num*pow(10,exp);
        exp++;
        n = n/y;  
    }
    return sum;
}

int main(){
    int n;
    int y;
    cin>>n;
    cin>>y;
    cout<<decimal_y(n, y);
    return 0;
}