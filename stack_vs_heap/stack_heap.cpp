#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int* p = new int();
    *p = 10;
    int* q = new int[4];
    for(int i = 0; i<4; i++){
        cin>>*(q+i);

    }

    cout<<p<<endl;
    cout<<*p<<endl;

    for(int i = 0; i<4; i++){
        cout<<(q+i)<<endl;
    }
    
    delete(p);
    delete(q);

    cout<<p<<endl;
    cout<<q<<endl;
    p=NULL;
    q = NULL;

    return 0;

}