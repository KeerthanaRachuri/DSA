#include<iostream>
#include<String>
#include<algorithm>
using namespace std;

int main(){
    char a;
    cin>>a;
    string s;
    cin>>s;
    int count = 0;
    for(int i = 0; i<s.length(); i++)
    {
       if(s[i]== a)
       {
        count++;
       }
    }

    cout<<count<<endl;

    return 0;
}